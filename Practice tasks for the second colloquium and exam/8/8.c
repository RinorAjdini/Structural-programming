#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX 100


int main()
{
    int m,n;scanf("%d%d",&m,&n);
    float A[m][n];
    int B[m];
    float mesatarja[m];
    for(int i=0;i<m;i++)
    {
        mesatarja[i]=0;
         B[i]=0;
    }
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%f",&A[i][j]);
            mesatarja[i]+=A[i][j];
        }
        mesatarja[i]=(float)mesatarja[i]/j;
    }
    float index;
    for(i=0;i<m;i++)
    {
        int isfirst=1;
        float max;
        for(j=0;j<n;j++)
        {
           if(isfirst)
           {
               index=A[i][j];
               max=mesatarja[i]-A[i][j];
               if(max<0)
               {
                   max*=-1;
               }
               isfirst=0;
           }
           else
           {
               float k=mesatarja[i]-A[i][j];
               if(k<0)
               {
                   k*=-1;
               }
               if(k>max)
               {
                   max=k;
                   index=A[i][j];
               }
           }
        }
        B[i]=index;
    }
    for( i=0;i<m;i++)
    {
        printf("%d ",B[i]);
    }
	return 0;
}
