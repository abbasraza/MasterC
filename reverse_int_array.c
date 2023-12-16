#include <stdio.h>

#define SIZE 5
// this is wrong implementation because we need to stop at size/2 because we are swapping elements from both ends
// void reverseArray(int arr_arg[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         int temp = arr_arg[i];
//         arr_arg[i] = arr_arg[size - i - 1];
//         arr_arg[size - i - 1] = temp;
//     }
// }

void reverseArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    // int arr[SIZE] = {1, 2};
    // int arr[SIZE] = {1, 2, 3};
    // int arr[SIZE] = {1, 2, 3, 4};
    int arr[SIZE] = {1, 2, 3, 4, 5};

    reverseArray(arr, SIZE);

    printf("Reversed array: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}