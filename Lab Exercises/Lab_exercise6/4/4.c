#include <stdio.h>

int main()
{
    int n;scanf("%d",&n);
    int A[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    int k=(n-1)/2;
    int B[2][2]={};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<k && j<k)
            {
                B[0][0]+=A[i][j];
            }
            else if(i<k && j>k)
            {
                B[0][1]+=A[i][j];
            }
            else if(i>k && j<k)
            {
                B[1][0]+=A[i][j];
            }
            else if(i>k && j>k)
            {
                B[1][1]+=A[i][j];
            }
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
