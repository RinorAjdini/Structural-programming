#include <stdio.h>
#include <ctype.h>
#include <string.h>
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *pok;
    pok=fopen("input.txt","r");
    if(pok==NULL)
    {
        printf("Datotekata ne moze da se otvara!");
        return -1;
    }
    int isfirst=1;
    char linija[101];
    while(fgets(linija,101,pok)!=NULL)
    {
        int A[101];
        int br=0;
        int abr=0;
        for(int i=0;i<strlen(linija);i++)
        {
            if(isdigit(linija[i]))
            {
                br++;
                A[abr]=linija[i]-'0';
                abr++;
            }
        }
            //sortimi
            for(int k=0;k<abr;k++)
            {
                for(int j=k+1;j<abr;j++)
                {
                    if(A[k]>A[j])
                    {
                        int temp=A[k];
                        A[k]=A[j];
                        A[j]=temp;
                    }
                }
            }
            if(isfirst==1)
            {
                isfirst=0;
            }
            else
                printf("\n");
            printf("%d:",br);
            for(int k=0;k<abr;k++)
            {
                printf("%d",A[k]);
            }
    }
    fclose(pok);
    return 0;
}
