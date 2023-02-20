#include <stdio.h>

int main(){
int n;
scanf("%d", &n);
int k=(n/10000)+(n%10);
printf("%d",k);
n=n/10;
n=n%1000;
int s=(n/100)+(n%10);
printf(" %d",s);
n=n%100;
n=n/10;
printf(" %d", n);

return 0;
}
