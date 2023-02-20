#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 100

void revertString(char *a, char *b, char *comparator) {

int i,flag=0;
char temp;


for (i=0;i != strlen(a)/2 ;i++){
    temp = *(a+i);
    *(a+i) = *(a+strlen(a)-i-1);
    *(a+strlen(a)-i-1) = temp;
}


for (i=0;i != strlen(b)/2 ;i++){
    temp = *(b+i);
    *(b+i) = *(b+strlen(b)-i-1);
    *(b+strlen(b)-i-1) = temp;
}

 if (tolower(*(comparator))=='p' && tolower(*(comparator+1))=='o'&& tolower(*(comparator+2))=='m'&& tolower(*(comparator+3))=='a'&& tolower(*(comparator+4))=='l'){
            flag = 1;
 }
 else if (tolower(*(comparator))=='p' && tolower(*(comparator+1))=='o'&& tolower(*(comparator+2))=='g'&& tolower(*(comparator+3))=='o'&& tolower(*(comparator+4))=='l'&& tolower(*(comparator+5))=='e' && tolower(*(comparator+6))=='m'){
            flag =0;
}
else{
    printf("Invalid comparator");
    return -1;
    }



if (strcmp(a,b)>=1){
    if (flag==1){
        printf("%s",b);
    }
    else{
        printf("%s",a);
    }

}
else{
 if (flag==1){
        printf("%s",a);
    }
    else{
        printf("%s",b);
    }


}


}

int main(){

    char niza1[MAX];
    char niza2[MAX];
    char niza3[MAX];
    int i,n;
    scanf("%d",&n);
    getchar();


    for (i=0;i<n;i++){


        scanf("%[^\n]",niza1);
        getchar();

        scanf("%[^\n]",niza2);
        getchar();

        scanf("%[^\n]",niza3);
        getchar();

        revertString(niza1,niza2,niza3);
        printf("\n");

    }
    return 0;

}
