#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main() 
{
    int *arr = malloc(sizeof(int) * 5);int i,j,n=5;
    long int min=0,max=0;
    for(int arr_i = 0; arr_i < 5; arr_i++)
       scanf("%d",&arr[arr_i]);
    for (i = 0; i < n-1; i++)
     {
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
        }
     }
    }
    for(i=0;i<n-1;i++)
    {
        min=min+arr[i];
    }
        for(i=1;i<n;i++)
    {
        max=max+arr[i];
    }
        printf("%ld %ld",min,max);
    return 0;
}

