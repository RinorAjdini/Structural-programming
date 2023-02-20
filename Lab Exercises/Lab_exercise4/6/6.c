#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int matrica[n][100];
    for(int i=0;i<n;i++){
        int golemina;
        scanf("%d",&golemina);
        for(int j=0;j<golemina;j++){
            scanf("%d",&matrica[i][j]);
        }
        int ogledalni = 0;
        for(int j=0;j<golemina;j++){
            if(matrica[i][j]==matrica[i][golemina-j-1]) ogledalni++;
        }
        printf("%.2f%%\n",(float) ogledalni/golemina*100);
    }
    return 0;
}
