#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int n,sum=0,i,j,sum1=0,to=0;
    scanf("%d",&n);
    int a[100][100];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }   
    }   
    for(i=0;i<n;i++)   
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
             sum=sum+a[i][j]; 
        }   
    }
    for(i=0;i<n;i++)   
     {
         for(j=0;j<n;j++)
         {
             if(i==n-j-1)
             sum1=sum1+a[i][j];
         }
    }
    to=sum-sum1;
    printf("%d",abs(to));
    return 0;
}
