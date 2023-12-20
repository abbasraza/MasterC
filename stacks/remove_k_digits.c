#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int removeKDigits(char* num, int k) {
    int len = strlen(num);
    
    // Create a stack to store the digits
    char stack[len];
    int top = -1;
    
    // Iterate through each digit in the number
    for (int i = 0; i < len; i++) {
        char digit = num[i];
        
        // While the stack is not empty and the current digit is less than the top of the stack
        while (top >= 0 && k > 0 && digit < stack[top]) {
            // Pop elements from the stack
            top--;
            k--;
        }
        
        // Push the current digit onto the stack
        stack[++top] = digit;
    }
    
    // // After iterating through all the digits, if there are still remaining digits to be removed
    // while (k > 0 && top >= 0) {
    //     // Pop elements from the stack
    //     top--;
    //     k--;
    // }
    
    // Construct the smallest possible integer by concatenating the digits in the stack
    char result[len - k + 1];
    int idx = 0;
    for (int i = 0; i <= top; i++) {
        result[idx++] = stack[i];
    }
    result[idx] = '\0';
    
    // Convert the resulting string to an integer
    int smallest = atoi(result);
    
    return smallest;
}

int main() {
    char num[] = "10200";
    int k = 1;
    
    int smallest = removeKDigits(num, k);
    
    printf("Smallest possible integer after removing %d digits: %d\n", k, smallest);
    
    return 0;
}
