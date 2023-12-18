#include <stdio.h>

void moveZerosToEnd(int arr[], int size) {
    int left = 0;
    int right = 0;

    while (right < size) {
        if (arr[right] != 0) {
            // Swap non-zero element with the element at the left pointer
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            // Increment both pointers
            left++;
            right++;
        } else {
            // Increment only the right pointer
            right++;
        }
    }
}

int main() {
    int arr[] = {0,1,0,3,12};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    moveZerosToEnd(arr, size);

    printf("\nArray after moving zeros to end: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
