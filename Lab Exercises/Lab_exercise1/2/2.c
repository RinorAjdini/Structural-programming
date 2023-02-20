#include <stdio.h>

int main()
{
    int m;
    float v,bmi;
    scanf("%d%f",&m,&v);
    v=v/100.0;
    bmi=m/(v*v);
    printf("%.2f",bmi);
    return 0;
}
