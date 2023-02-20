#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int najznajcajna_cifra(int n)
{
    while(n>9)
    {
        n=n/10;
    }
    return n;
}
int main()
{
    wtf();
    FILE *pok;
    pok=fopen("broevi.txt","r");
    if(pok==NULL)
    {
        printf("Datotekata ne moze da se otvara!");
        return -1;
    }
    int n;
    while(fscanf(pok,"%d",&n))
    {
        if(n==0)
        {
        break;
        }
    int A[n];
    int index=0;
    for(int i=0;i<n;i++)
    {
        fscanf(pok,"%d",&A[i]);
    }
    int max=najznajcajna_cifra(A[0]);
    for(int i=1;i<n;i++)
    {
        if(najznajcajna_cifra(A[i])>max)
        {
            max=najznajcajna_cifra(A[i]);
            index=i;
        }
    }
    printf("%d\n",A[index]);
    }
	fclose(pok);
}
