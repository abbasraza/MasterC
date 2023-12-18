#include <stdio.h>
#include <string.h>

void reverseString(char* str)
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        // Swap characters at left and right pointers
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        // Move the pointers towards the center
        left++;
        right--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the input
    str[strcspn(str, "\n")] = '\0';

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
