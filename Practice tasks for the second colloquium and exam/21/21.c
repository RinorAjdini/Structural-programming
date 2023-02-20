#include <stdio.h>
#include <ctype.h>
#include <string.h>
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
void transformiraj_rek (char *niza, int n, int x)
{
    if(n==0)
    {
        if(isalpha(*niza))
        {
            if(islower(*niza))
            {
                int m=*niza-'a';
                m+=x;
                m=m%26;
                *niza=m+'a';
            }
            else
            {
                int m=*niza-'A';
                m+=x;
                m=m%26;
                *niza=m+'A';
            }
        }
            printf("%c",*niza);
    }
    else
    {
        transformiraj_rek(niza,n-1,x);
         if(isalpha(*(niza+n)))
        {
            if(islower(*(niza+n)))
            {
                int m=*(niza+n)-'a';
                m+=x;
                m=m%26;
                *(niza+n)=m+'a';
            }
            else
            {
                int m=*(niza+n)-'A';
                m+=x;
                m=m%26;
                *(niza+n)=m+'A';
            }
        }
            printf("%c",*(niza+n));
    }
}

int main() {
    int n,x;
    scanf("%d%d\n",&n,&x);
    while(n--)
    {
        char niza[81];
        fgets(niza,81,stdin);
        //transofrmiraj(niza,x);
        int k=strlen(niza);
        transformiraj_rek(niza,k-1,x);
    }
    return 0;
}
