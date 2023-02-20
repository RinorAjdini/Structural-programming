#include <stdio.h>
#include <math.h>
int main()
{
    int z;scanf("%d",&z);
    int a,b;
    int pati=0;
    int site=0;
    while(scanf("%d%d",&a,&b))
    {
        if(a==0 && b==0)
            break;
        if(a+b==z)
            pati++;
      site++;
    }
    float procent=(pati*1.0/site)*100;
    printf("Vnesovte %d parovi od broevi chij zbir e %d\n",pati,z);
    printf("Procentot na parovi so zbir %d e %.2f%%",z,procent);
    return 0;
}
