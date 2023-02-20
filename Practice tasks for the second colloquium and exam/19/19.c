#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    int n;scanf("%d",&n);
    float A[n][n];
    float x=0,y=0;
    float B[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            B[i][j]=0;
            scanf("%f",&A[i][j]);
            if(i>j)
                x+=A[i][j];
            if(i+j>n-1)
                y+=A[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                B[i][j]+=x;
            if(i+j==n-1)
            B[i][j]+=y;

        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%.1f ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
