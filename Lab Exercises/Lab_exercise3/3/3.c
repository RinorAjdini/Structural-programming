#include <stdio.h>
#include <math.h>
int main()
{
   int a,b;scanf("%d%d",&a,&b);
   int vkupno=0;
   for(int i=a;i<=b;i++)
   {
       int k=i;
       int zbir=0;
       while(k>0)
       {
           int posledna=k%10;
           if(posledna%2==0)
           {
               zbir+=posledna;
           }
           k/=10;
       }
       if(zbir>0 && zbir%4==0)
       {
           printf("%d\n",i);
           vkupno++;
       }
   }
   printf("Vkupno: %d",vkupno);
}
