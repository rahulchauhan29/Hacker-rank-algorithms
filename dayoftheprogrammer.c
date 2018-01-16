#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int year; 
    scanf("%d", &year);
    if(year<=1917)
    {
        if(year%4==0)
        {
           printf("12.09.%d",year);
        }
        else
        {
            printf("13.09.%d",year);
        }
    }
    else if(year==1918)
        printf("26.09.%d",year);
    else
    {
        if(year%4==0)
        {
            if(year%100==0)
            {
                if(year%400==0)
                {
                    printf("12.09.%d",year);
                    exit(0);
                }
                else
                {
                    printf("13.09.%d",year);
                    exit(0);
                }
            }
            printf("12.09.%d",year);
        }
        else
            printf("13.09.%d",year);
    }
    return 0;
}
