#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define max 100
int poramnet (int a)
{
    if(a==0)
    return 0;
    int r=a%10;
    if(r==9)
    r=7;
    return poramnet(a/10)*10+r;
}



int main() {
    int n;
    int A[max];
    int i=0;
    while(scanf("%d",&n))
    {
        A[i]=poramnet(n);
        i++;
    }
    int d=i;
    int size;
    if(i>5)
    {
     size=5;
    }
    else
        size=i;
    for(int j=0;j<d-1;j++)
    {
        for(int k=j+1;k<d;k++)
        {
            if(A[j]>A[k])
            {
                int temp=A[j];
                A[j]=A[k];
                A[k]=temp;
            }
        }
    }
    for(int j=0;j<size;j++)
    {
        printf("%d ",A[j]);
    }
    return 0;
}
