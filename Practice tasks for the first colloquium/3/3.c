#include <stdio.h>
#include <math.h>
int main()
{
    int n;scanf("%d",&n);
    int broj=0;
    int zbir=0;
    for(int i=1;i<n;i++)
    {
        int zbirnadeliteli=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                zbirnadeliteli+=j;
            }
        }
        if(zbirnadeliteli>zbir)
        {
            zbir=zbirnadeliteli;
            broj=i;
        }
    }
    printf("%d",broj);
    return 0;
}

