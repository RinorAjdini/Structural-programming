#include <stdio.h>
#define MAX 100
int main()
{
  int n;scanf("%d",&n);
  int a[MAX],t[MAX];
  for(int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  int k;scanf("%d",&k);
  int help=0;
  for(int i=0;i<n;i++)
  {
      if(a[i]<k)
        {
            t[help]=a[i];
            help++;
        }
  }
   for(int i=0;i<n;i++)
   {
       if(a[i]>=k)
       {
           t[help]=a[i];
           help++;
       }
   }
   for(int i=0;i<help;i++)
   printf("%d ",t[i]);
    return 0;
}
