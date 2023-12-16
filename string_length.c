#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;

    while (str[length] != '\0')
        length++;

    printf("found null char %x at len: %d\n", str[length], length);

    return length;
}

int main() {
    char str[] = "Hello, World!";

    int length = stringLength(str);

    printf("Length: %d\n", length);

    return 0;
}
