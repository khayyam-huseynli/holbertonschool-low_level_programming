section .data
    hello db 'Hello, World', 0xA ; 'Hello, World' followed by a newline character

section .text
    global main

main:
    ; Write the string to stdout
    mov rax, 1              ; The system call for sys_write
    mov rdi, 1              ; File descriptor 1 is stdout
    mov rsi, hello          ; Address of the string to output
    mov rdx, 13             ; The number of bytes to write
    syscall                 ; Invoke the kernel

    ; Exit the program
    mov rax, 60             ; The system call for sys_exit
    xor rdi, rdi            ; Return a code of 0
    syscall                 ; Invoke the kernel

