#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n>9)
        {
        int probaj1=0,probaj2=0;
        int k=n;
        int poslednacifra=k%10;
        k=k/10;
        if(poslednacifra>=5)
        {
            probaj1=1;
            int p=0;
            while(k>0)
            {
                poslednacifra=k%10;
                if(p%2==0)
                {
                    if(poslednacifra>=5)
                    {
                      probaj1=0;
                      break;
                    }
                }
                else
                {
                    if(poslednacifra<5)
                    {
                        probaj1=0;
                        break;
                    }
                }
                k=k/10;
                p++;
            }
        }
        else
        {
            probaj2=1;
            int p=0;
            while(k>0)
            {
                poslednacifra=k%10;
                if(p%2==0)
                {
                    if(poslednacifra<5)
                    {
                      probaj2=0;
                      break;
                    }
                }
                else
                {
                    if(poslednacifra>=5)
                    {
                        probaj2=0;
                        break;
                    }
                }
                k=k/10;
                p++;
            }
        }
        if(probaj1==1 || probaj2==1)
            printf("%d\n",n);
        }
    }
    return 0;
}
