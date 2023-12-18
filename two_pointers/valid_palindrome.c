#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char *str) {
    // Convert all characters to lowercase
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }

    // Remove non-alphabetic characters
    int j = 0;
    for (int i = 0;  i < strlen(str); i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    // Use two pointers to check if it's a palindrome
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    char str[] = "A man, a plan, a canal: Panama";
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
