#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#define MAX 100
int sum_pos (int *a,int ind , int n)
{
    int sum;
    if(ind>n)
        return 0;
    else
    {
      sum=0;
    for(int i=ind;i<n;i++)
        sum+=*(a+i);
    }
    return sum;
}
int main()
{
    int n,ind;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&ind);
    printf("%d",sum_pos(A,ind,n));
    return 0;
}
