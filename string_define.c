#include <stdio.h>
#include <string.h>

/*
1. The code defines four different methods of initializing and working with strings in C.
2. Method 1 initializes a character array `string1` with a string literal.
3. Method 2 initializes a pointer `string2` to a string literal.
4. Method 3 initializes a character array `string3` with an array of characters.
5. Method 4 initializes a pointer `string4` and assigns a string literal to it later.

6. The code demonstrates printing and manipulating the strings.
7. It shows that `string1` and `string3` can be modified since they are arrays, 
   while `string2` and `string4` cannot be modified directly since they are pointers to string literals.
8. The code also shows the length of each string using `strlen()` and the size of each variable using `sizeof()`.
9. It highlights that `strlen()` may not give the correct result for `string2` since it is not null-terminated.
10. Finally, the code modifies `string1` by replacing the null character at the end with the character 'x' and
    demonstrates the updated string.


strlen finds lenght by searching for null character
sizeof finds size of variable i.e number of bytes allocated to it

when we store a string literal in an array, size of array is equal to number of characters in string literal + 1 (for null character)
when we store a string literal in a pointer, size of pointer is equal to size of pointer i.e 8 bytes (on 64 bit machine) or 4 bytes (on 32 bit machine)
*/

int main()
{
    // Method 1: Character Array
    char string1[] = "Hello, World!"; // since its in double quotes, it is a string literal i.e a null terminated array of characters

    // Method 2: Using a Pointer to a String Literal
    char *string2 = "This is a string."; // since its in double quotes, it is a string literal i.e a null terminated array of characters

    // Method 3: Initializing with an Array of Characters
    char string3[] = {'S', 't', 'r', 'i', 'n', 'g'}; // its not a string literal, its an array of characters.
                                                    //  we will have to add a null character at the end to make it a string

    // Method 4: Using a Pointer and Initializing Later
    char *string4;
    string4 = "Initialized later.";

    // Print and demonstrate the strings
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);
    printf("String 3 (%%s will search for null char): %s\n", string3); // this will print garbage because string3 is not null terminated
    printf("String 4: %s\n", string4);

    printf("len of string1 %d ||  size of string1 %lu\n", (int)(strlen(string1)), sizeof(string1));
    printf("len of string2 %d ||  size of string2(pointer) %lu\n", (int)(strlen(string2)), sizeof(string2)); // since string2 is not null terminated, strlen will not give correct result
    printf("len of string3 %d ||  size of string3 %lu\n", (int)(strlen(string3)), sizeof(string3));
   printf("len of string4 %d ||  size of string4(pointer) %lu\n", (int)(strlen(string4)), sizeof(string4));



    string1[0] = 'h'; // since string1 is an array, we can modify it
    //string2[0] = 't'; // this will throw a segmentation fault because string2 is constant
    string3[0] = 's'; // since string3 is an array, we can modify it
    //string4[0] = 'i'; // this will throw a segmentation fault because string4 is constant

    string1[sizeof(string1)  - 1] = 'x';

    printf("String1 after replacing null character at end with x ==> %s\n", string1);

    printf("len of string1 after replacing null character at end with x ==> %d\n", (int)(strlen(string1)));


    return 0;
}
