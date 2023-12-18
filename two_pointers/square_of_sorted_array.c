#include <stdio.h>
// take 2 pointers, one at the start and one at the end of the array
// compare the square of the 2 pointers
// whichever is greater, put it in the result array starting from the end
// decrement the pointer of the greater element if the left pointer is greater
// increment the pointer of the greater element if the right pointer is greater
// continue until the start pointer is greater than the end pointer

void squareOfSortedArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    int result[size];
    int index = size - 1;

    while (left <= right) {
        int leftSquare = arr[left] * arr[left];
        int rightSquare = arr[right] * arr[right];

        if (leftSquare > rightSquare) {
            result[index] = leftSquare;
            left++;
        } else {
            result[index] = rightSquare;
            right--;
        }
        index--;
    }

    // // Copy the remaining elements from the left side of the array
    // while (left >= 0) {
    //     result[index] = arr[left] * arr[left];
    //     left--;
    //     index--;
    // }

    // Print the sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {-4,-1,0,3,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the sorted array
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    squareOfSortedArray(arr, size);

    return 0;
}
