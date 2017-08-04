#include "Min.h"

Min::Min()
{
    //ctor
}

float Min::min(float a, float b)
{
    if(a < b)
        return a;
    return b;
}

float Min::min(float a, float b, float c)
{
    float arr[3] = {a, b, c};
    return minarr(arr, 3);
}

float Min::min(float a, float b, float c, float d)
{
    float arr[4] = {a, b, c, d};
    return minarr(arr, 4);
}

float Min::min(float a, float b, float c, float d, float e)
{
    float arr[5] = {a, b, c, d, e};
    return minarr(arr, 5);
}

float Min::minarr(float arr[], int size)
{
    float min = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    return min;
}
