#include <stdio.h>
#define MAX_SIZE 100

// Function to find the next greater element for each element in the array
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
    int arr[] = {4 , 5 , 2 , 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    findNextGreaterElement(arr, n);

    return 0;
}
