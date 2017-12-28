#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j,sum=0,sum1=0; 
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                sum=sum+a[i][j];
        }
    }i=0;j=n-1;
    while(n--)
    {
        sum1=sum1+a[i][j];
        i++;j--;
    }
    if(sum>sum1)
        printf("%d",sum-sum1);
    else
        printf("%d",sum1-sum);
    return 0;
}
