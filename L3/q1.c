#include <stdio.h>

int main() {
    char str[100];
    int len = 0, i, n = 1;

    printf("Enter any string: ");
    scanf("%s",&str);


    while (str[len] != '\0') {
        len++;
    }


    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            n = 0;
            break;
        }
    }

    if (n == 1) {
        printf("Given string is a Palindrome.\n");
    } else {
        printf("Given string is not a Palindrome.\n");
    }

    return 0;
}