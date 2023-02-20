#include <stdio.h>

int main(){
int index;
int p1,p2,p3,p4,p5,p6;
scanf("%d", &index);
scanf("%d%d%d%d%d%d", &p1, &p2, &p3, &p4, &p5, &p6);
float prosec=(p1+p2+p3+p4+p5+p6)/6.0;
printf("Prosek: %.3f\n", prosec);
printf("Student: %d\n", index);
int k=index/10000;
k=20-k;
printf("%d godina", k);
printf("\n");
printf("Nagraden: ");
if(prosec>=9.5)
{
    printf("1");
}
else
{
    printf("0");
}


return 0;
}
