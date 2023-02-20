#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#define MAX 100

int main()
{
    int m,n;scanf("%d%d",&m,&n);
    int A[m][n];
    int B[n];
    int redici=0,koloni=0,vkupno=0;
    //memset(B, 0, n);
    // B[n]={0};
     for(int i=0;i<n;i++)
        B[i]=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    int popolnetaR[m],popolnetaK[n];
    //memset(popolnetaR,0,m-1);
    for(int i=0;i<m;i++)
        popolnetaR[i]=0;
    //memset(popolnetaK,0,n-1);
    for(int i=0;i<n;i++)
        popolnetaK[i]=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]==1)
            {
                redici++;
                B[j]++;
                if(redici>2 && popolnetaR[i]==0)
                {
                    vkupno++;
                    popolnetaR[i]++;
                }
                if(B[j]>2 && popolnetaK[j]==0)
                {
                    vkupno++;
                    popolnetaK[j]++;
                }
            }
            else
            {
                redici=0;
                B[j]=0;
            }
        }
        redici=0;
    }
    printf("%d",vkupno);

    return 0;
}
