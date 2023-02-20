#include <stdio.h>

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
        printf("Datotekata ne moze da se otvora!");
        return -1;
    }
    char c;
    int lower=0,upper=0,all=0;
    while((c=fgetc(pok))!=EOF)
    {
        if(c>='a' && c<='z')
        {
            lower++;
            all++;
        }
        else if(c>='A' && c<='Z')
        {
            upper++;
            all++;
        }
    }
    printf("%0.4f\n",(float)upper/all);
    printf("%0.4f",(float)lower/all);
    fclose(pok);

}
