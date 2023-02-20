#include <stdio.h>
#include <ctype.h>

int BrojPozitivni(int niza[], int n)
{
    if(n==1)
    {
        int p=niza[n-1];
        if(niza[n-1]>=0)
            return 1;
        else
            return 0;
    }
    else
    {
        int p=niza[n-1];
        if(niza[n-1]>=0)
            return 1+BrojPozitivni(niza,n-1);
        else
            return BrojPozitivni(niza,n-1);
    }
}

int main() {
    int n;scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("%d",BrojPozitivni(A,n));
    return 0;
}
