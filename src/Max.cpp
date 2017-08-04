#include "Max.h"

Max::Max()
{
    //ctor
}

float Max::max(float a, float b)
{
    if(a > b)
        return a;
    return b;
}

float Max::max(float a, float b, float c)
{
    float arr[3] = {a, b, c};
    return maxarr(arr, 3);
}

float Max::maxarr(float arr[], int size)
{
    float max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}
