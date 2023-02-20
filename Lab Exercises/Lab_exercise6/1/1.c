#include <stdio.h>

int main()
{
    int m,n;scanf("%d%d",&m,&n);
    int A[m][n],B[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
            B[i][j]=0;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]==0)
            {
                for(int k=i-1;k<i+2;k++)
                {
                    for(int p=j-1;p<j+2;p++)
                    {
                        if((k>=0 && k<m) && (p>=0 && p<n))
                        {
                            if(A[k][p]==1)
                            {
                                B[i][j]++;
                            }
                        }
                    }
                }
            }
            else
            {
                B[i][j]=-1;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(B[i][j]==-1)
            {
                printf("* ");
            }
            else
            {
                printf("%d ",B[i][j]);
            }
        }
        printf("\n");
    }



    return 0;
}
