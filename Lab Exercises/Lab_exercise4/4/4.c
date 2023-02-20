#include <stdio.h>
int main(){

    int n;scanf("%d",&n);
    while(n--)
    {
        int m;scanf("%d",&m);
        int A[m];int k;
        for(int i=0;i<m;i++)
        {
            scanf("%d",&A[i]);
        }
        scanf("%d",&k);
        for(int i=0;i<m;i++)
        {
            if((i+1)%k==0)
            {
                int temp=A[i];
                A[i]=A[i-1];
                A[i-1]=temp;
            }
        }
        for(int i=0;i<m;i++)
        {
            printf("%d ",A[i]);
        }
        printf("\n");
    }
    return 0;
}
