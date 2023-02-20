#include <stdio.h>
#include <math.h>
int main()
{
   int n;scanf("%d",&n);
   int max,min;
   for(int i=0;i<n;i++)
   {
       int k;scanf("%d",&k);
       if(i==0)
       {
        max=k;min=k;
       }
       else
       {
           if(k>max)
            max=k;
           else if(k<min)
            min=k;
       }
   }
   printf("Najgolema razlika: %d",max-min);
}
