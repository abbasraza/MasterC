#include <stdio.h>

int max_sum_subarray(int arr[], int n, int k)
{
    int max_sum = -5555;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (i > k - 1)
        {

            sum -= arr[i - k];
        }
        if (sum > max_sum)
        {
            max_sum = sum;
        }
        printf("max_sum = %d, sum = %d\n", max_sum, sum);

    }

    return max_sum;
}

int main() {
    int arr[] =  {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;

    int result = max_sum_subarray(arr, n, k);

    if (result != -1) {
        printf("Maximum sum of subarray of size %d: %d\n", k, result);
    }

    return 0;
}
