#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;scanf("%d%d",&a,&b);
    if(a<=0 || b<=0)
        printf("Invalid input");
    else
    {
    if(b>a)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    int probnaa=a,probnab=b;
    int eparenekvi=1;
    while(probnaa>0)
    {
        probnaa/=10;
        if((probnaa%10)==(probnab%10))
        {
            probnaa/=10;
            probnab/=10;
        }
        else
        {
            eparenekvi=0;
            printf("NE");
            return 0;
        }

    }
    printf("PAREN");

    }

    return 0;
}

