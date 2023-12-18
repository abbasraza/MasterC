#include <stdio.h>

// Function to remove all occurrences of an element from an array
int removeElement(int arr[], int n, int element) {
    int left = 0; // Left pointer
    int right = 0; // Right pointer

    // Move the right pointer to find the next element to be replaced
    for (right = 0; right < n; right++) 
    {
        // If the current element is not equal to the element to be removed,
        // replace the element at the left pointer with the current element
        if (arr[right] != element) {
            arr[left] = arr[right];
            left++;
        }
    }

    // Return the new length of the array after removing the element
    return left;
}

int main() {
    int arr[] = {0,1,2,2,3,0,4,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element = 2;

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Remove all occurrences of the element from the array
    n = removeElement(arr, n, element);

    printf("\nArray after removing %d: ", element);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
