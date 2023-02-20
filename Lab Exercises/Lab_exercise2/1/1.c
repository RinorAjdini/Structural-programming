#include <stdio.h>
int main(){
int n;
int k;
scanf("%d%d", &n, &k);

k=k*1.18;
if(n-k>=1)
{
    printf("1");
}
else
{
    printf("0");
}

return 0;
}
