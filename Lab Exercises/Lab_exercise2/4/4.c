#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d=(b*b)-(4*a*c);
    if(d>0)
    {
        float x1,x2;
        x1=(-b+sqrt(d))/(2.0*a);
        x2=(-b-sqrt(d))/(2.0*a);
        printf("Reshenija na ravenkata se: %.2f i %.2f",x2,x1);
    }
    else if(d==0)
    {
      float x=-b/(2.0*a);
      printf("Dvojno reshenie na ravenkata e: %.2f",x);
    }
    else
    {
        printf("Ravenkata nema realni reshenija");
    }
    return 0;
}
