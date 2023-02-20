#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#define MAX 100

int main()
{
    int x,m,n;
   scanf("%d%d%d",&x,&m,&n);
   int  A[m][n];
   int vkupno=0;
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           scanf("%d",&A[i][j]);
           vkupno+=A[i][j];
       }
       if(vkupno>x)
       {
           for(int j=0;j<n;j++)
            A[i][j]=1;
       }
       else if(vkupno<x)
       {
           for(int j=0;j<n;j++)
            A[i][j]=-1;
       }
       else
        for(int j=0;j<n;j++)
        A[i][j]=0;

       vkupno=0;
   }
   for (int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
        printf("%d ",A[i][j]);
       printf("\n");
   }

    return 0;
}
