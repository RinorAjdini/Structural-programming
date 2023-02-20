#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define max 1000
int abss(int sum1,int sum2)
{
    int d=sum1-sum2;
    if(d<0)
        d*=-1;
    return d;
}
int main() {
    int m,n;scanf("%d%d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int k=n%2;
    for(int i=0;i<m;i++)
    {
            if(n%2==1)
            {
                int sum1=0,sum2=0;
                int mid=n/2;
                for(int k=0;k<=mid;k++)
                    sum1+=a[i][k];
                for(int k=mid;k<n;k++)
                    sum2+=a[i][k];

                a[i][mid]=abss(sum1,sum2);

            }
            else
            {
                int sum1=0,sum2=0;
                int mid1=n/2,mid2=(n/2)-1;
                for(int k=0;k<=mid2;k++)
                    sum1+=a[i][k];
                for(int k=mid1;k<n;k++)
                    sum2+=a[i][k];
                a[i][mid1]=abss(sum1,sum2);
                a[i][mid2]=abss(sum1,sum2);
            }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
