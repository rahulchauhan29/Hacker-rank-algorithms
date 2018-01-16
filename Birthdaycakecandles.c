#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int n; 
    scanf("%i", &n);int i,max=0,counter=0;
    int *a = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&a[ar_i]);
    }max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
            counter++;
    }
    printf("%d\n", counter);
    return 0;
}
