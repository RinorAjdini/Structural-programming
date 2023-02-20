#include <stdio.h>
#include <math.h>
int main()
{
    int m;scanf("%d",&m);
    int totalmax=0;float totalddv=0;float ddv;
    while(m--)
    {
     float povrat;   int mnogugolem=0, presmetaj=0;
    int n;scanf("%d",&n);
       ddv=0;
   for(int i=0;i<n;i++)
   {
       int iznos; char tip;
       scanf("%d %c",&iznos,&tip);
       mnogugolem+=iznos;
       if(tip=='A')
        ddv+=iznos*18/100.0;
       else if (tip=='B')
        ddv+=iznos*5/100.0;
   }
   if(mnogugolem>30000)
   {
       printf("Sum %d is bigger than 30000\n",mnogugolem);
   }
   else
   {
  povrat=0.15*ddv;
   printf("Total tax return is: %.2f\n",povrat);
   }
   if(povrat>totalddv && mnogugolem<30000)
    {
        totalmax=mnogugolem;
        totalddv=povrat;
    }
    }
    printf("Max amount of reciept: %d. Max tax return for reciepts: %.2f",totalmax,totalddv);
    return 0;
}

