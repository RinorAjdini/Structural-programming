#include <stdio.h>
#include <math.h>
int main()
{
   int n;scanf("%d",&n);
   for(int i=0;i<=n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if((i==0)|| (i==j)|| (i+j==n-1) || (i==n-1))
           printf("*");
           else
           printf(" ");
       }
       printf("\n");
   }
}
