#include <stdio.h>

int main()
{
    int s;
    int second,hour,minute;
    scanf("%d",&s);
    hour=s/3600;
    minute=(s%3600)/60;
    second=(s%3600)%60;
    printf("%d sekundi se %d casovi, %d minuti i %d sekundi",s,hour,minute,second);
    return 0;
}
