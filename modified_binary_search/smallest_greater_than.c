#include <math.h>
#include <stdio.h>
#include <stdlib.h>


void binary_search(int nums[], int target, int start, int end)
{
    if (start > end)
    {
        printf("smallest greater than %d is %d\n", target, nums[start]);
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
    int nums[] = {-1,0,3,5,9,12};
    //{-1,0,3,5,9,12};
    int target = 0;
    binary_search(nums, target, 0, (sizeof(nums)/ sizeof(int)) - 1);
}