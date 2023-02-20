#include <stdio.h>
#include<math.h>
#define MAX 100
int main()
{
    int n; scanf("%d",&n);
    int d; int min;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        d=abs(a-b)+abs(b-c);
        if(i==0)
        {
            min=d;
        }
        if(d<min)
            min=d;
    }
   printf("%d",min);
    return 0;
}
