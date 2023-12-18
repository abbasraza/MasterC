#include <stdio.h>

//this program finds 2 numbers in an array whose sum is equal to a given target

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void findTwoNumbersWithSum(int arr[], int n, int target)
{
    // Step 1: Sort the array
    bubble_sort(arr, n);

    // Step 2: Initialize two pointers
    int left = 0;
    int right = n - 1;

    // Step 3: Find the pair of numbers
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            printf("Pair found: %d and %d\n", arr[left], arr[right]);
            return;
        } else if (sum < target)
        {
            left++;
        } else
        {
            right--;
        }
    }
    // Step 4: No pair found
    printf("No pair found with sum equal to %d\n", target);
}

int main()
{
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    findTwoNumbersWithSum(arr, n, target);

    return 0;
}
