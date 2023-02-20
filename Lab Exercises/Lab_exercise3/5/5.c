#include <stdio.h>
#include <math.h>
int main()
{
   int n;scanf("%d",&n);
   float ddv=0;
   for(int i=0;i<n;i++)
   {
       int iznos; char tip;
       scanf("%d %c",&iznos,&tip);
       if(tip=='A')
        ddv+=iznos*18/100.0;
       else if (tip=='B')
        ddv+=iznos*5/100.0;
   }
  float povrat=0.15*ddv;
   printf("Total tax return is: %.2f",povrat);
}
