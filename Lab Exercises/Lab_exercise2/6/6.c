#include <stdio.h>
int main()
{
    int poeni;
    scanf("%d",&poeni);
    int proveri=0;
    if(poeni>-1 && poeni<101)
    {
        int ocenka;
        if(poeni<=50)
            ocenka=5;
        else if(poeni<=60)
            ocenka=6;
        else if(poeni<=70)
            ocenka=7;
        else if(poeni<=80)
            ocenka=8;
        else if(poeni<=90)
            ocenka=9;
        else
            ocenka=10;
        int posl;char c;
        posl=poeni%10;
        printf("Ocenka %d",ocenka);
        if(poeni>49)
        {
        if(posl>=1 && posl<=3)
            c='-';
        else if(posl>=4 && posl<=7)
            c=' ';
        else
            c='+';
        printf("%c",c);
        }
    }
    else
    {
        printf("Nevalidna vrednost za poeni!");
    }
    return 0;
}
