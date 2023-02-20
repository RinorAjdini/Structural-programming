#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        int postoi1=0,postoi2=0;
        if(n>9)
        {
        int k=n;
        int poslednacifra=k%10;
        int neposledna=(k/10)%10;
        k=k/10;
        if(poslednacifra<neposledna)
        {
            postoi1=1;
             int p=0;
            while(k>10)
            {
            poslednacifra=k%10;
            neposledna=(k/10)%10;
            if(p%2==0)
            {
               if(poslednacifra<=neposledna)
               {
                   postoi1=0;
                   break;
               }
            }
            else
            {
                if(poslednacifra>=neposledna)
                {
                    postoi1=0;
                    break;
                }
            }
            p++;
            k=k/10;
            }
        }
        else if(poslednacifra>neposledna)
        {
            postoi2=1; int p=0;
             while(k>10)
            {
            poslednacifra=k%10;
            neposledna=(k/10)%10;
            if(p%2==0)
            {
               if(poslednacifra>=neposledna)
               {
                   postoi2=0;
                   break;
               }
            }
            else
            {
                if(poslednacifra<=neposledna)
                {
                    postoi2=0;
                    break;
                }
            }
            p++;
            k=k/10;
            }
        }
        if(postoi1==1 || postoi2==1)
        {
            printf("%d\n",n);
        }
        }
    }
    return 0;
}
