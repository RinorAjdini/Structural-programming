#include <stdio.h>
#include <ctype.h>
void writeToFile() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[100];
    while(!feof(f)){
        fgets(line,100,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    writeToFile();
    FILE * pok;
    FILE * pok1;
    pok=fopen("input.txt","r");
    pok1=fopen("output.txt","w");
    if(pok==NULL)
    {
        printf("Datotekata ne moze da se najde");
        return -1;
    }
    if(pok1==NULL)
    {
        printf("Datotekata ne moze da se kreira");
        return -1;
    }
    int n;
    fscanf(pok,"%d",&n);
    int A[n][n],B[n][n];
    int shuma=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            fscanf(pok,"%d",&A[i][j]);
            if(i==j)
                shuma+=A[i][j];
            B[i][j]=0;
        }
    }
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        B[i][j]=shuma;
    }
}
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
                fprintf(pok1,"%03d ",B[i][j]);
            else
                fprintf(pok1,"    ");
        }
        fprintf(pok1,"\n");
    }


    fclose(pok);
    fclose(pok1);


    printFile();
    return 0;
}
