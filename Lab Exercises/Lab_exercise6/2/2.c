#include <stdio.h>

int main()
{
    int n;scanf("%d",&n);
    int A[n][n];
    int sumnaglavnatadi=0,sumnasprotivnatadi=0,prvatakol=0,poslednatakol=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
            if(i==j)
               sumnaglavnatadi+=A[i][j];
            if(i+j==n-1)
                sumnasprotivnatadi+=A[i][j];
            if(j==0)
            prvatakol+=A[i][j];
            if(j==n-1)
            poslednatakol+=A[i][j];
        }
    }
    printf("%d\n",sumnaglavnatadi-sumnasprotivnatadi);
    printf("%d",prvatakol-poslednatakol);
    return 0;
}
