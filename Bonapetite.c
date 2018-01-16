#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int a[n];
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&a[ar_i]);
    }
    int b; 
    scanf("%i", &b);
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    sum=sum-a[k];
    sum=sum/2;
    if(sum==b)
        printf("Bon Appetit");
    else
        printf("%d",b-sum);
    return 0;
}
