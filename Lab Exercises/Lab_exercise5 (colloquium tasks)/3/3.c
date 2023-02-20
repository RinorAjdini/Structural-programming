#include <stdio.h>
#include<math.h>
#define MAX 100
int main()
{
    int a;
    int count=0;
    int joker=0;
    int suma=0;
    while(scanf("%d",&a))
    {
        if(a>=1 && a<=90)
        {
            count++;
            if(count>=1 && count<=7)
            {
                joker+=a%10;
                if(count<7)
                    joker*=10;
            }
            else
            {
                suma+=a;
            }

        }
        else
            break;
    }
    joker+=suma;
    printf("%d",joker);

    return 0;
}
