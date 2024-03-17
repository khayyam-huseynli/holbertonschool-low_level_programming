#include <stdio.h>
#include <stdlib.h>

/* Function to check if a character is a digit */
int is_digit(char c) {
    return c >= '0' && c <= '9';
}

/* Function to calculate the length of a string */
int str_len(const char *s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

/* Function to print an error message and exit */
void print_error_and_exit() {
    printf("Error\n");
    exit(98);
}

/* Function to multiply two large numbers */
char *multiply_large_numbers(const char *num1, const char *num2) {
    int len1 = str_len(num1);
    int len2 = str_len(num2);
    int i, j, carry, sum;
    char *result;

    if (len1 == 0 || len2 == 0) {
        return NULL;
    }

    result = malloc(len1 + len2 + 1);
    if (result == NULL) {
        print_error_and_exit();
    }

    for (i = 0; i < len1 + len2; i++) {
        result[i] = '0';
    }
    result[len1 + len2] = '\0';

    for (i = len1 - 1; i >= 0; i--) {
        if (!is_digit(num1[i])) {
            free(result);
            print_error_and_exit();
        }
        carry = 0;
        for (j = len2 - 1; j >= 0; j--) {
            if (!is_digit(num2[j])) {
                free(result);
                print_error_and_exit();
            }
            sum = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            carry = sum / 10;
            result[i + j + 1] = (sum % 10) + '0';
        }
        if (carry > 0) {
            result[i + j + 1] = (result[i + j + 1] - '0' + carry) + '0';
        }
    }

    /* Remove leading zeros */
    for (i = 0; i < len1 + len2 - 1; i++) {
        if (result[i] != '0') {
            break;
        }
    }
    if (i > 0) {
        char *trimmed_result = malloc(len1 + len2 - i + 1);
        if (trimmed_result == NULL) {
            free(result);
            print_error_and_exit();
        }
        for (j = 0; i < len1 + len2; j++, i++) {
            trimmed_result[j] = result[i];
        }
        trimmed_result[j] = '\0';
        free(result);
        return trimmed_result;
    }

    return result;
}

/* Main function */
int main(int argc, char *argv[]) {
    
    char *result;

    if (argc != 3) {
        print_error_and_exit();
    }

    result = multiply_large_numbers(argv[1], argv[2]);
    if (result == NULL) {
        print_error_and_exit();
    }

    printf("%s\n", result);
    free(result);
    return 0;
}

