#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 1000

void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}


int main() {
    wf();
    FILE *pok;
    pok=fopen("livce.txt","r");
    if(pok==NULL)
    {
        printf("Datotekata ne moze da se otvara!");
        return -1;
    }
    int gjatesia[MAX];
    char niza[MAX][10];
    int tip[MAX];
    float koef[MAX];
    float n;
    fscanf(pok,"%f\n",&n);
    int i=0;
    int index=0;
    float gl_koef=0;
    while(!feof(pok))
    {
        char c;
        int j=0;
        while((c=fgetc(pok))!=' ')
        {
            niza[i][j]=c;
            j++;
        }
        gjatesia[i]=j;
        fscanf(pok,"%d",&tip[i]);
        fscanf(pok,"%f\n",&koef[i]);
        n=n*koef[i];
        if(koef[i]>gl_koef)
        {
            gl_koef=koef[i];
            index=i;
        }
        i++;
    }
    for(int j=0;j<gjatesia[index];j++)
    {
        if(niza[index][j]!=' ')
        {
            printf("%c",niza[index][j]);
        }
        else
            break;
    }
    printf(" %d %0.2f\n",tip[index],koef[index]);
    printf("%0.2f",n);
    fclose(pok);
    return 0;
}
