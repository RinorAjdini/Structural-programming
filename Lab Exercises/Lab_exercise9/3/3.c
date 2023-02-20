#include <stdio.h>
#include <ctype.h>
#define max 1000
void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();
    FILE *pok;
    pok=fopen("text.txt","r");
    if(pok==NULL)
    {
        printf("Datotekata ne moze da se najde");
        return -1;
    }
    char a[max][max];
    int red=0,kol=0;
    int len_matrica[max];
    int len_of_red_matrica[max];
    char c;
    int br_zbor=0,br=0;
    int all=0;
    int index=0;
    int maksi=0;
    while((c=fgetc(pok))!=EOF)
    {
        if(isspace(c))
        {
            br_zbor++;
        }
        if(c=='\n')
        {
            a[red][kol]=c;
            if(br_zbor>maksi)
            {
                maksi=br_zbor;
                index=red;
            }
            all+=br_zbor;
            len_of_red_matrica[red]=br_zbor;
            br_zbor=0;
            red++;
            kol=0;
        }
        else
        {
            a[red][kol]=c;
            kol++;
        }
    }
    for(int i=0;i<red;i++)
    {
        printf("%d\n",len_of_red_matrica[i]);
    }
    printf("%.2f\n",(float)all/red);
    char ch;
    int d=0;
    while((ch=a[index][d])!='\n')
    {
        if(isalpha(ch))
        {
            if(islower(ch))
            {
                ch=toupper(ch);
            }
            else
            {
                ch=tolower(ch);
            }
        }
        printf("%c",ch);
        d++;
    }

    fclose(pok);

}
