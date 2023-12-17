#include <math.h>
#include <stdio.h>
#include <stdlib.h>


void swap(double *a, double *b)
{
  double temp = *a;
  *a = *b;
  *b = temp;
}

void selection_sort(double array[], int size)
{
  for (int step = 0; step < size - 1; step++)
  {
    int min_idx = step;
    for (int i = step + 1; i < size; i++)
    {

      if (array[i] < array[min_idx])
      {
        min_idx = i;
      }
    }
    swap(&array[min_idx], &array[step]);
  }
}

void print_array(double array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%f  ", array[i]);
  }
  printf("\n");
}


void binary_search(double nums[], double target, int start, int end)
{
    if (start > end)
    {
        printf("smallest greater than %f is %f\n", target, nums[start]);
        return;
    }
    
    int middle = ((end - start) / 2)  + start;
    if (target < nums[middle])
    {
        end = middle - 1;
    }
    else if (target >= nums[middle])
    {
        start = middle + 1;
    }
    // if (target == nums[middle])
    // {
    //     printf("target found at index %d\n", middle);
    //     return;
    // }

    binary_search(nums, target, start, end);
}

void main()
{
    double nums[] = {7,-10,13,8,4,-7.2,-12,-3.7,3.5,-9.6,6.5,-1.7,-6.2,7};
    selectionSort(nums, sizeof(nums)/sizeof(double));
    print_array(nums, sizeof(nums)/sizeof(double));
    //{-1,0,3,5,9,12};
    double target = 0;
    binary_search(nums, target, 0, (sizeof(nums)/ sizeof(double)) - 1);
}