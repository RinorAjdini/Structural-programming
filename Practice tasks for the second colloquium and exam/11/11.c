#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define max 1000

void wtf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *pok;
    pok=fopen("podatoci.txt","r");
    if(pok==NULL)
    {
        printf("Datotekata ne moze da se najde");
        return -1;
    }
    char a[max][max];
    char c;
    int red=0,kol=0;
    int len_of_red[max];
    char z1,z2;
    getchar();
    z1=getchar();
    z2=getchar();
    int st=0;
    for(int i=0;i<red;i++)
    {
        int st=0;
        int j=len_of_red[i];
        while(a[i][st]!=z1)
        {
            st++;
        }
        while(a[i][j]!=z2)
        {
            j--;
        }
        for(int r=st+1;r<j;r++)
        {
            printf("%c",a[i][r]);
        }
        printf("\n");
    }
    fclose(pok);
	return 0;
}
