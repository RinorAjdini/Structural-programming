#include <stdio.h>
int main()
{
    int n,d,m,g;
    int username;
    scanf("%d",&n);
    g=n%1000+1000;
    m=(n/1000)%100;
    d=n/100000;
    username=d*100+m*1000+g;
    if(username<10000)
    {
        if(g<1961)
        username+=70000;
        else if(g>1960 && g<1981)
        username+=80000;
        else
        username+=90000;
    }
    printf("%d",username);
    return 0;
}
