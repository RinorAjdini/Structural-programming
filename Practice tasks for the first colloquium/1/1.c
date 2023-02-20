#include <stdio.h>
#include <math.h>
int main()
{
    int m,n;scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        int k=i;
        int pronajden=1;
        while(k>0)
        {
            int poslednacifra=k%10;
            if(poslednacifra%2==1)
            {
                pronajden=0;
                break;
            }
            k=k/10;
        }
        if(pronajden==1)
        {
            printf("%d",i);
            return 0;
        }
    }
    printf("NE");
    return 0;
}

