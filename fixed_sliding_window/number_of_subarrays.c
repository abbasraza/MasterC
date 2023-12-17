#include <stdio.h>

void number_of_subarrays(int arr[], int n, int k, double avg_threshold)
{
    int sum = 0;
    int num_of_subarrays = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (i > k - 1)
        {
            sum -= arr[i - k];
            double avg = (double)sum / k;
             avg >= avg_threshold ? num_of_subarrays++ : num_of_subarrays;
            printf(" average :%f\n", avg);
        }

        if (i == k - 1)
        {
            double avg = (double)sum / k;
            printf(" average :%f\n", avg);
             avg >= avg_threshold ? num_of_subarrays++ : num_of_subarrays;
            printf(" average :%f\n", avg);

        }
    }
    printf("num_of_subarrays :%d\n", num_of_subarrays);
}

int main() {
    int arr[] =  {2,2,2,2,5,5,5,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    double average_threshold = 4;
    number_of_subarrays(arr, n, k, average_threshold);


    return 0;
}
