#include <stdio.h>
#include <math.h>
int main()
{
    int n,x;scanf("%d%d",&n,&x);
    for(int i=n-1;i>0;i--)
    {
        int k=i;
        int postoi=1,dali;
        while(k>0)
        {
            int poslednacifra=k%10;
            dali=1;
            int probnax=x;
            while(probnax>0)
            {
                int poslednacifranax=probnax%10;
                if(poslednacifra==poslednacifranax)
                {
                    dali=0;
                    break;
                }
                probnax=probnax/10;
            }
            if(dali==0)
            {
                break;
            }
            k=k/10;
        }
        if(dali==1)
        {
            printf("%d",i);
            return 0;
        }
    }
    printf("0");
    return 0;
}
