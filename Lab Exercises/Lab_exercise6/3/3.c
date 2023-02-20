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
    int max=1;
    int probnamax=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(A[i][j]<A[i][j+1])
            {
                probnamax++;
            }
            else
            {
                if(probnamax>max)
                max=probnamax;
                probnamax=1;
            }
        }
        if(probnamax>max)
            max=probnamax;
        probnamax=1;
    }
    if(probnamax>max)
        max=probnamax;
    printf("%d",max);
    return 0;
}
