#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
int is_digit(char c);
int str_len(char *s);
void print_error_and_exit(char *result);
char *multiply_large_numbers(char *num1, char *num2);

/* Function to check if a character is a digit */
int is_digit(char c) {
    return c >= '0' && c <= '9';
}

/* Function to calculate the length of a string */
int str_len(char *s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

/* Function to print an error message and exit */
void print_error_and_exit(char *result) {
    if (result != NULL) {
        free(result);
    }
    printf("Error\n");
    exit(98);
}

/* Function to multiply two large numbers */
char *multiply_large_numbers(char *num1, char *num2) {
    int len1, len2, i, j, carry, sum, start, new_length;
    char *result;

    len1 = str_len(num1);
    len2 = str_len(num2);
    result = malloc(len1 + len2);
    if (result == NULL) {
        print_error_and_exit(result);
    }

    for (i = 0; i < len1 + len2; i++) {
        result[i] = 0;
    }

    for (i = len1 - 1; i >= 0; i--) {
        if (!is_digit(num1[i])) {
            print_error_and_exit(result);
        }
        carry = 0;
        for (j = len2 - 1; j >= 0; j--) {
            if (!is_digit(num2[j])) {
                print_error_and_exit(result);
            }
            sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
            carry = sum / 10;
            result[i + j + 1] = sum % 10;
        }
        if (carry > 0) {
            result[i + len2] += carry;
        }
    }

    start = 0;
    while (start < len1 + len2 - 1 && result[start] == 0) {
        start++;
    }

    if (start != 0) {
        new_length = len1 + len2 - start;
        for (i = 0; i < new_length; i++) {
            result[i] = result[i + start];
        }
        for (; i < len1 + len2; i++) {
            result[i] = 0;
        }
    }

    return result;
}

/* Main function */
int main(int argc, char *argv[]) {
    char *result;
    int result_length, start, i;

    if (argc != 3) {
        print_error_and_exit(NULL);
    }

    result = multiply_large_numbers(argv[1], argv[2]);
    if (result == NULL) {
        print_error_and_exit(NULL);
    }

    result_length = str_len(argv[1]) + str_len(argv[2]);
    start = 0;
    while (start < result_length - 1 && result[start] == 0) {
        start++;
    }
    for (i = start; i < result_length; i++) {
        printf("%d", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}

