#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int matrica[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrica[i][j]);
        }
    }
    int maksDolzinaNiza = 1, maksDolzinaMatrica = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(matrica[i][j]<matrica[i][j+1]){
                maksDolzinaNiza++;
            }else{
                if(maksDolzinaNiza>maksDolzinaMatrica){
                    maksDolzinaMatrica = maksDolzinaNiza;
                }
                maksDolzinaNiza=1;
            }
        }
        if(maksDolzinaNiza>maksDolzinaMatrica){
            maksDolzinaMatrica = maksDolzinaNiza;
        }
        maksDolzinaNiza=1;
    }
    printf("%d",maksDolzinaMatrica);
    return 0;
}
