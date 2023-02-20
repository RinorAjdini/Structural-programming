#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    int m,n;scanf("%d%d",&m,&n);
    int A[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    int x,y;
    scanf("%d%d",&x,&y);
    int k1=0,k2=0,k3=0,k4=0;
    for(int i=x;i<m;i++)
    {
        for(int j=y;j<n;j++)
        {
            k4+=A[i][j];
        }
    }
    for(int i=0;i<x;i++)
    {
        for(int j=y;j<n;j++)
        {
             k2+=A[i][j];
        }
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
           k1+=A[i][j];
        }
    }
    for(int i=x;i<m;i++)
    {
        for(int j=0;j<y;j++)
        {
            int p=A[i][j];
            k3+=A[i][j];
        }
    }
    printf("%d %d %d %d",k2,k1,k3,k4);
	return 0;
}
