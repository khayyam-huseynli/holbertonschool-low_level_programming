#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi_osabi(unsigned char *e_ident);
void print_type_entry(unsigned int e_type, unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

void check_elf(unsigned char *e_ident) {
    for (int index = 0; index < 4; index++) {
        if (e_ident[index] != ELFMAG[index]) {
            dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

void print_magic(unsigned char *e_ident) {
    printf("  Magic:   ");
    for (int index = 0; index < EI_NIDENT; index++) {
        printf("%02x", e_ident[index]);
        printf(index == EI_NIDENT - 1 ? "\n" : " ");
    }
}

void print_class(unsigned char *e_ident) {
    printf("  Class:                             ");
    switch (e_ident[EI_CLASS]) {
        case ELFCLASSNONE: printf("none\n"); break;
        case ELFCLASS32:   printf("ELF32\n"); break;
        case ELFCLASS64:   printf("ELF64\n"); break;
        default:           printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

void print_data(unsigned char *e_ident) {
    printf("  Data:                              ");
    switch (e_ident[EI_DATA]) {
        case ELFDATANONE: printf("none\n"); break;
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
        default:           printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

void print_version(unsigned char *e_ident) {
    printf("  Version:                           %d", e_ident[EI_VERSION]);
    printf(e_ident[EI_VERSION] == EV_CURRENT ? " (current)\n" : "\n");
}

void print_abi_osabi(unsigned char *e_ident) {
    printf("  OS/ABI:                            ");
    switch (e_ident[EI_OSABI]) {
        case ELFOSABI_NONE:       printf("UNIX - System V\n"); break;
        case ELFOSABI_HPUX:       printf("UNIX - HP-UX\n"); break;
        case ELFOSABI_NETBSD:     printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_LINUX:      printf("UNIX - Linux\n"); break;
        case ELFOSABI_SOLARIS:    printf("UNIX - Solaris\n"); break;
        case ELFOSABI_FREEBSD:    printf("UNIX - FreeBSD\n"); break;
        case ELFOSABI_OPENBSD:    printf("UNIX - OpenBSD\n"); break;
        case ELFOSABI_ARM:        printf("ARM\n"); break;
        case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
        default:                  printf("<unknown: %x>\n", e_ident[EI_OSABI]);
    }

    printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

void print_type_entry(unsigned int e_type, unsigned long int e_entry, unsigned char *e_ident) {
    if (e_ident[EI_DATA] == ELFDATA2MSB) e_type >>= 8;
    printf("  Type:                              ");
    switch (e_type) {
        case ET_NONE: printf("NONE (None)\n"); break;
        case ET_REL:  printf("REL (Relocatable file)\n"); break;
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
        case ET_DYN:  printf("DYN (Shared object file)\n"); break;
        case ET_CORE: printf("CORE (Core file)\n"); break;
        default:      printf("<unknown: %x>\n", e_type); break;
    }

    if (e_ident[EI_CLASS] == ELFCLASS32)
        printf("  Entry point address:               %#x\n", (unsigned int)e_entry);
    else
        printf("  Entry point address:               %#lx\n", e_entry);
}

void close_elf(int elf) {
    if (close(elf) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
        exit(98);
    }
}

int main(int argc, char *argv[]) {
    Elf64_Ehdr *header;
    int o, r;

    if (argc != 2) {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    o = open(argv[1], O_RDONLY);
    if (o == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        return 98;
    }

    header = malloc(sizeof(Elf64_Ehdr));
    if (header == NULL) {
        close_elf(o);
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        return 98;
    }

    r = read(o, header, sizeof(Elf64_Ehdr));
    if (r == -1) {
        free(header);
        close_elf(o);
        dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
        return 98;
    }

    check_elf(header->e_ident);
    printf("ELF Header:\n");
    print_magic(header->e_ident);
    print_class(header->e_ident);
    print_data(header->e_ident);
    print_version(header->e_ident);
    print_abi_osabi(header->e_ident);
    print_type_entry(header->e_type, header->e_entry, header->e_ident);
    free(header);
    close_elf(o);

    return 0;
}

