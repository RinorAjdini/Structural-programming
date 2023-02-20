#include <stdio.h>
#include <math.h>
int main()
{
    int n;scanf("%d",&n);
    if(n>9)
    {
    for(int i=n-1;i>0;i--)
    {
        int reverse=0;
        int brojnacifra=0;
        int k=i;
        while(k>0)
        {
            reverse*=10;
            reverse+=k%10;
            brojnacifra++;
            k=k/10;
        }
        if(reverse%brojnacifra==0)
        {
            printf("%d",i);
            return 0;
        }
    }
    }
    else
        printf("Brojot ne e validen");
    return 0;
}

