#include <stdio.h>

int main()
{
    int suma;
    scanf("%d",&suma);
    int pari5000=0,pari1000=0,pari500=0,pari100=0,pari50=0,pari10=0,pari5=0,pari2=0,pari1=0;
    pari5000=suma/5000;
    suma%=5000;
    pari1000=suma/1000;
    suma%=1000;
    pari500=suma/500;
    suma%=500;
    pari100=suma/100;
    suma%=100;
    pari50=suma/50;
    suma%=50;
    pari10=suma/10;
    suma%=10;
    pari5=suma/5;
    suma%=5;
    pari2=suma/2;
    suma%=2;
    pari1=suma;
    printf("%d*5000\n",pari5000);
    printf("%d*1000\n",pari1000);
    printf("%d*500\n",pari500);
    printf("%d*100\n",pari100);
    printf("%d*50\n",pari50);
    printf("%d*10\n",pari10);
    printf("%d*5\n",pari5);
    printf("%d*2\n",pari2);
    printf("%d*1",pari1);
    return 0;
}
