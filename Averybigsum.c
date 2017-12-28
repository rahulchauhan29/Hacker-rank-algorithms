#include <stdio.h>
int main()
{
    int n;
    long int sum=0;
    scanf("%d",&n);
    long int a[10000];
    for(int i=0;i<n;i++)
    {
    scanf("%ld",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        
    }
printf("%ld",sum);
return 0;}
