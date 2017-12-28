#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int n; 
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&a[grades_i]);
    }
    int i,x,diff;
    for(i=0;i<n;i++)
    {
        if(a[i]<38)
            printf("%d\n",a[i]);
        else
        {
          x=a[i]/5+1;
          diff=(5*x)-(a[i]);
            if(diff<3)
                printf("%d\n",5*x);
            else
                printf("%d\n",a[i]);
        }
    }

    return 0;
}
