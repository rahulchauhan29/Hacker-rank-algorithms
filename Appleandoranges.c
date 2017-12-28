#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
    int i,x=0,y=0;
    for(i=0;i<m;i++)
    {
        apple[i]=apple[i]+a;
    }
    for(i=0;i<n;i++)
    {
        orange[i]=orange[i]+b;
    }
    for(i=0;i<m;i++)
    {
        if(apple[i]>=s && apple[i]<=t)
            x++;
    }
    for(i=0;i<n;i++)
    {
        if(orange[i]>=s && orange[i]<=t)
            y++;
    }
    printf("%d\n",x);
    printf("%d",y);
    return 0;
}
