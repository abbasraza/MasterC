#include <stdio.h>
#define MAX_SIZE 100

// Function to find the previous greater element for each element in the array
void findPreviousGreaterElement(int arr[], int n) {
    int stack[MAX_SIZE]; // Stack to store the elements
    int top = -1; // Initialize stack top

    // Traverse the array from left to right
    for (int i = 0; i < n; i++) {
        // Pop elements from stack while stack is not empty and the current element is greater than the top of stack
        while (top != -1) {
            if (arr[i] < stack[top]) {
                printf("Previous greater element for %d is %d\n", arr[i], stack[top]);
                break;
            } else {
                top--;
            }
        }

        if (top == -1) {
            printf("Previous greater element for %d is -1\n", arr[i]);
        }
        // Push the current element to the stack
        stack[++top] = arr[i];
    }
}

// Function to find the next smaller element for each element in the array
void findNextSmallerElement(int arr[], int n) {
    int stack[MAX_SIZE]; // Stack to store the elements
    int top = -1; // Initialize stack top

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--) {
        // Pop elements from stack while stack is not empty and the current element is smaller than the top of stack
        while (top != -1) {
            if (arr[i] > stack[top]) {
                printf("Next smaller element for %d is %d\n", arr[i], stack[top]);
                break;
            } else {
                top--;
            }
        }

        if (top == -1) {
            printf("Next smaller element for %d is -1\n", arr[i]);
        }
        // Push the current element to the stack
        stack[++top] = arr[i];
    }
}

// Function to find the previous smaller element for each element in the array
void findPreviousSmallerElement(int arr[], int n) {
    int stack[MAX_SIZE]; // Stack to store the elements
    int top = -1; // Initialize stack top

    // Traverse the array from left to right
    for (int i = 0; i < n; i++) {
        // Pop elements from stack while stack is not empty and the current element is smaller than or equal to the top of stack
        while (top != -1) {
            if (arr[i] > stack[top]) {
                printf("Previous smaller element for %d is %d\n", arr[i], stack[top]);
                break;
            } else {
                top--;
            }
        }

        if (top == -1) {
            printf("Previous smaller element for %d is -1\n", arr[i]);
        }
        // Push the current element to the stack
        stack[++top] = arr[i];
    }
}

void findNextGreaterElement(int arr[], int n) {

    int stack[MAX_SIZE]; // Stack to store the elements
    int top = -1; // Initialize stack top

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--) 
    {
        // Pop elements from stack while stack is not empty and the current element is greater than the top of stack
        while (top != -1)
        {
            if(arr[i] < stack[top])
            {
                printf("Next greater element for %d is %d\n", arr[i], stack[top]);
                break;
            }
            else
            {
                top--;
            }
        }

        if (top == -1)
        {
            printf("Next greater element for %d is -1\n", arr[i]);
        }
        // Push the current element to the stack
        stack[++top] = arr[i];
    }

}

int main() {
    int arr[] = {73,74,75,71,69,72,76,73};
    int n = sizeof(arr) / sizeof(arr[0]);

    findNextGreaterElement(arr, n);
    findPreviousGreaterElement(arr, n);
    findNextSmallerElement(arr, n);
    findPreviousSmallerElement(arr, n);

    return 0;
}
