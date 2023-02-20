#include <stdio.h>
#include <math.h>
int main()
{
   int n,m;
   scanf("%d%d",&n,&m);
   int vkupno=0;
   for(int i=n;i<=m;i++)
   {
       int reversenum=0;
       int k=i;
       while(k>0)
       {
           reversenum*=10;
           reversenum+=k%10;
           k=k/10;
       }
       if(reversenum<=i)
       {
           printf("%d\n",i);
           vkupno++;
       }
   }
   printf("Vkupno: %d",vkupno);
}
