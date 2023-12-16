#include <stdio.h>

void max_average_subarray(int arr[], int n, int k)
{
    int sum = 0;
    double max_average = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (i > k - 1)
        {
            sum -= arr[i - k];
            double average = (double)sum / k;
            if (average > max_average)
            {
                max_average = average;
            }
        }

        if (i == k - 1)
        {
            double average = (double)sum / k;
            if (average > max_average)
            {
                max_average = average;
            }
        }
    }

    printf("max average :%f\n", max_average);
}

int main() {
    int arr[] =  {1,12,-5,-6,50,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    max_average_subarray(arr, n, k);


    return 0;
}
