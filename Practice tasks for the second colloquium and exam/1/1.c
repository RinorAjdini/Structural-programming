#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

int dalie_samoglaska (char ch)
{
    ch=tolower(ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return 1;
    return 0;
}

int main() {

  writeToFile();

  FILE *pok;
  pok=fopen("text.txt","r");
  if(pok==NULL)
  {
      printf("Datotekata ne moze da se otvara!");
      return -1;
  }
  char c,c1;
  int isfirst=0;
  int br=0;
  while((c=fgetc(pok))!=EOF)
  {
      if(isfirst==0)
      {
          isfirst=1;
          c1=c;
      }
      else
      {
          if(isalpha(c) && isalpha(c1))
          {
           c=tolower(c);
           c1=tolower(c1);
           if(dalie_samoglaska(c) && dalie_samoglaska(c1))
           {
               br++;
               printf("%c%c\n",c1,c);
           }
          }
          c1=c;
      }
  }
  printf("%d",br);
  fclose(pok);
  return 0;
}
