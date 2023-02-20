#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    int niza[n];
    for(int i=0;i<n;i++){
        scanf("%d",&niza[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",niza[i]);
    }
    printf("\n");
    int novaNiza[n];
    for(int i=n-1;i>=0;i--){
        printf("%d ",niza[i]);
        novaNiza[n-i-1]=niza[i];
    }
    printf("\n");

    int golemina;
    if(n%2) golemina=n/2+1;
    else golemina = n/2;

    int tretaNiza[golemina],brojac=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            printf("%d ",novaNiza[i]);
            tretaNiza[brojac] = novaNiza[i];
            brojac++;
        }
    }
    printf("\n");
    for(int i=golemina-1;i>=0;i--){
        printf("%d ",tretaNiza[i]);
    }
    printf("\n");
    return 0;
}
