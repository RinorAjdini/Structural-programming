#include <stdio.h>
#include <math.h>
int main()
{
   int n;scanf("%d",&n);
   if(n<2)
   {
    printf("Nevaliden vlez");
   }
   else
   {
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(i+j<n-1)
           printf(" ");
           else
           printf("*");
       }
       printf("\n");
   }
   }
}
