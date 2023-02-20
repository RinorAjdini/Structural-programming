#include <stdio.h>

void elka (int n)
{
    for(int i=0;i<(n+1)/2;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(j<=n/2+i && j>=n/2-i)
                printf("*");
           else
            printf(" ");
        }
        printf("\n");
    }

}
int main()
{
    int n;scanf("%d",&n);
    elka(n);
    return 0;
}
