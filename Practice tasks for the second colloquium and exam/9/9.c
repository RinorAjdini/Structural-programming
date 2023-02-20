#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define max 1000

void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}


int main() {
   wtf();
    FILE *pok;
    pok=fopen("dat.txt","r");
    if(pok==NULL)
    {
        printf("Datotekata ne moze da se najde!");
        return -1;
    }
    char c;
    char glavna_linija[101];
    int maxlength=0;
    char linija[101];
    int i,j;
    while(!feof(pok))
    {
        fgets(linija,101,pok);
        i=0;
        while(!isdigit(linija[i]))
        {
            i++;
        }
            if(isdigit(linija[i]))
            {
                int length=1;
                int end=strlen(linija)-1;
                j=end;
                while(!isdigit(linija[j]))
                      {
                       j--;
                      }
                       int kryesorja=j-i+1;
                       if(kryesorja>=maxlength)
                       {
                           for(int k=i;k<=j;k++)
                           {
                               glavna_linija[k-i]=linija[k];
                           }
                           maxlength=kryesorja;
                       }
                }

    }
    for(int i=0;i<maxlength;i++)
    {
        printf("%c",glavna_linija[i]);
    }
    fclose(pok);

	return 0;

}
