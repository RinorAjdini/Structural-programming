#include <stdio.h>
void readMatrix(int a[100][100], int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
int main()
{
    int n,m;scanf("%d%d",&n,&m);
    int a[100][100]={};
    readMatrix(a,n,m);
    int suma[4];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            suma[j]+=a[i][j];
        }
    }
    int min=suma[0],indeks=0;
    for(int i=1;i<m;i++)
    {
     if(suma[i]<min)
     {
          min=suma[i];
        indeks=i;
     }
    }
    printf("%d",indeks);
    return 0;
}
