#include <stdio.h>

void average_subarray(int arr[], int n, int k)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (i > k - 1)
        {
            sum -= arr[i - k];
            printf(" average :%f\n", (double)sum / k);
        }

        if (i == k - 1)
        {
            printf(" average :%f\n", (double)sum / k);
        }
    }
}

int main() {
    int arr[] =  {1, 3, 2, 6, -1, 4, 1, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    average_subarray(arr, n, k);


    return 0;
}
