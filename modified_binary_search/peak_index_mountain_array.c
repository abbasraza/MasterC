#include <stdio.h>

int findPeakIndex(int arr[], int start, int end)
{
    // Base case: if start and end cross each other, return the peak index
    if (start >= end) {
        return start;
    }
    
    // Find the middle index
    int mid = start + (end - start) / 2;
    
    // Check if the middle element is in the ascending or descending part
    if (arr[mid] < arr[mid + 1]) {
        // Middle element is in the ascending part, discard the ascending part
        return findPeakIndex(arr, mid + 1, end);
    } else {
        // Middle element is in the descending part, discard the descending part
        return findPeakIndex(arr, start, mid);
    }
}

int main() {
    int arr[] = {0,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int peakIndex = findPeakIndex(arr, 0, n - 1);
    
    printf("Peak index: %d\n", peakIndex);
    
    return 0;
}
