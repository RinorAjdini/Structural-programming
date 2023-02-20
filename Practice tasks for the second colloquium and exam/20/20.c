#include <stdio.h>
#include <ctype.h>
#define max 100

void transofrmiraj (char *niza, int x)
{
    for(int i=0;i<81;i++)
    {
        if(isalpha(*(niza+i)))
        {
            if(islower(*(niza+i)))
            {
                int n=*(niza+i)-'a';
                n+=x;
                n=n%26;
                *(niza+i)=n+'a';
            }
            else
            {
                int n=*(niza+i)-'A';
                n+=x;
                n=n%26;
                *(niza+i)=n+'A';
            }
        }
    }
}


int main() {
    int n,x;
    scanf("%d%d\n",&n,&x);
    while(n--)
    {
        char niza[81];
        fgets(niza,81,stdin);
        transofrmiraj(niza,x);
        printf("%s",niza);
    }
    return 0;
}
