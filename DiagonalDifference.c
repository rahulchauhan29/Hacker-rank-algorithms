#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int sum1=0;
    int sum2=0;    
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
           scanf("%d",&a[i][j]);
           }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                sum1 = sum1 + a[i][j];
            }
    }
    int c=n-1;
    for(int i=0;i<n;i++){
        
          sum2 = sum2 + a[i][c];
          c--;  
        }
    
    int f;
    f=abs(sum1-sum2);
    printf("%d",f);
    
    return 0;
}
