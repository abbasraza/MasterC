#include <stdio.h>

int main() {
    char letter = 'a';

    while (letter <= 'z') {
        printf("ASCII value of %c is %d\n", letter, letter);
        letter++;
    }

    return 0;
}