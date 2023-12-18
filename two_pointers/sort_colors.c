#include <stdio.h>
// three colors , three pointers

// it uses three pointers, left, current and right
// left points to the first non-zero element
// current points to the current element
// right points to the last element
// the idea is to swap the current element with the left element if the current element is 0
// once swapped, increment both left and current
// and swap the current element with the right element if the current element is 2
// once swapped, decrement right
// and increment current if the current element is 1
// the loop terminates when current is greater than right

void printArray(int* colors, int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", colors[i]);
    }
    printf("\n");
}
void sortColors(int* colors, int size) {
    int left = 0;
    int right = size - 1;
    int current = 0;

    while (current <= right) {
        printf("left: %d, current: %d, right: %d\n", left, current, right);
        printArray(colors, size);

        if (colors[current] == 0) {
            // Swap with the value at left
            int temp = colors[current];
            colors[current] = colors[left];
            colors[left] = temp;

            current++;
            left++;
        } else if (colors[current] == 2) {
            // Swap with the value at right
            int temp = colors[current];
            colors[current] = colors[right];
            colors[right] = temp;

            right--;
        } else {
            // Value is 1, increment current
            current++;
        }
    }
}

int main() {
    int colors[] = {2,0,2,1,1,0};
    int size = sizeof(colors) / sizeof(colors[0]);

    sortColors(colors, size);

    printf("Sorted colors: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", colors[i]);
    }
    printf("\n");

    return 0;
}


