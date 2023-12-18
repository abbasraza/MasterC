#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;

    int left = 0;
    int right = 0;

    for (right = 0; right < n - 1; right++)
    {
        if (arr[right] != arr[right + 1])
            arr[left++] = arr[right];
    }

    arr[left++] = arr[right];

    return left;
}

int main() {
    int arr[] = {0,0,1,1,1,2,2,3,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    n = removeDuplicates(arr, n);

    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
