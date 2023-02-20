#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000

void letterFrequency (char *text, char letter) {

    int i;
    float small=0,BIG=0;
    if (isupper(letter)){
        letter = tolower(letter);
    }


    for (i=0;i<strlen(text);i++){

        if (letter == *(text+i)){
            small++;
        }
        if (toupper(letter) == *(text+i)){
            BIG++;
        }

    }
    float all = strlen(text)+1;
    printf("%c -> %.3f%%\n",letter,small/all*100);
    printf("%c -> %.3f%%",toupper(letter),BIG/all*100);




}

int main(){


    char niza[MAX];
    char c;
    scanf("%[^\n]",niza);
    getchar();
    scanf("%c",&c);

    letterFrequency (niza,c);




}
