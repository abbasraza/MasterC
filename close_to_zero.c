
/* C code below */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double abs_custom(double n)
{
    if (n < 0)
        return n * -1;
}
double closest_to_zero(double ts[], int size)
{
    int close_index = 0;
    double min_diff = 0;
    if (size == 0)
        return 0; 
    min_diff = (ts[0]);   
    for (int i = 1; i < size; i++)
    {
        double diff = (ts[i]);
        if(abs_custom(diff) < abs_custom(min_diff))
        {
            min_diff = diff;
            close_index = i;
        }
    }

    for (int i = 1; i < size; i++)
    {
        double diff = (ts[i]);
        if (min_diff < 0 &&  (diff) == abs_custom(min_diff))
            return diff;
    }

    return min_diff;
}

void main()
{
        double ts[] = 
    // {7,-10,13,8,4,-7.2,-12,-3.7,3.5,-9.6,6.5,-1.7,-6.2,7};
    {-7 , -7};

    int size = sizeof(ts) / sizeof(ts[0]);
    printf("%f\n", closest_to_zero(ts, size));

}
