#include <stdio.h>

int obratenBroj (int broj)
{
    int reverse=0;
    while(broj>0)
    {
        reverse*=10;
        reverse+=broj%10;
        broj/=10;
    }
    return reverse;
}
int sumaNaCifri (int broj)
{
    int suma=0;
    while(broj>0)
    {
        suma+=broj%10;
        broj/=10;
    }
    return suma;
}
void pecatiVoInterval (int a, int b)
{
    for(int i=a;i<=b;i++)
    {
            if((i+obratenBroj(i))%sumaNaCifri(i+obratenBroj(i))==0)
            {
                printf("%d\n",i);
            }
    }
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    pecatiVoInterval(a,b);
    return 0;
}
