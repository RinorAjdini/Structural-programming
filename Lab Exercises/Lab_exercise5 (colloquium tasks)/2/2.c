#include <stdio.h>
#include<math.h>
#define MAX 100
int main()
{
    int a,b;scanf("%d%d",&a,&b);
    int nema=1;
    while(a>0)
    {
        int find=0;
        int posledna=a%10;
        int k=b;
        while(k>0)
        {
            if(posledna==k%10)
                find=1;
            k=k/10;
        }
        if(find==0)
            {
                nema=0;
                break;
            }
        a=a/10;
    }
    if(nema==0)
    printf("NE");
    else
    printf("DA");

    return 0;
}
