#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    int n;scanf("%d",&n);
    int m=n*2;
    int A[n][m];
    int B[m][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            scanf("%d",&A[i][j]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            B[i][j]=A[i][j];
    }
    for(int i=n;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            B[i][j]=A[i-n][j+n];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
