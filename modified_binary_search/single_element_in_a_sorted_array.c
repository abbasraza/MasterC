#include <stdio.h>

// Find middle
// find first pair around middle
// on one side of pair, the number of elements will be odd
// on other side of the pair, the number of elements will be even
// select the odd side
// repeat until start == end

int findSingleElement(int arr[], int start, int end) {
    // Base case: If start and end are equal, then we have found the single element
    if (start == end)
    {
        return arr[start];
    }

    int mid = start + (end - start) / 2;

    // If mid is even, the single element is on the right side
    if (mid % 2 == 0)
    {
        // find first pair 
        if (arr[mid] == arr[mid + 1]) {
            return findSingleElement(arr, mid + 2, end);
        } else {
            return findSingleElement(arr, start, mid);
        }
    }
    // If mid is odd, the single element is on the left side
    else {
        if (arr[mid] == arr[mid - 1]) {
            return findSingleElement(arr, mid + 1, end);
        } else {
            return findSingleElement(arr, start, mid - 1);
        }
    }
}

int main() {
    int arr[] = {1,1,2,3,3,4,4,8,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int singleElement = findSingleElement(arr, 0, size - 1);

    printf("The single element is: %d\n", singleElement);

    return 0;
}
