#include <stdio.h>
int main()
{
    int d,m,g;
    int valid_date=1;
    int rang=0,p=0;
    scanf("%d%d%d",&d,&m,&g);
    if((m>=1 && m<=12)&& (d>=1 && d<=31))
    {
        if(m==4 || m==6 || m==9 || m==11)
        {
            if(d==31)
                valid_date=0;
        }
        else if(m==2)
        {
            if(d<=29)
            {
            if(d==29)
            {
                if(g%4==0)
                {
                    if(g%100==0)
                    {
                     if(g%400!=0)
                            valid_date=0;
                    }

                }
                else
                    valid_date=0;
            }
            }
            else
                valid_date=0;
        }
    }
    else
    valid_date=0;
    if(valid_date)
        printf("DA");
    else
        printf("NE");
    return 0;
}
