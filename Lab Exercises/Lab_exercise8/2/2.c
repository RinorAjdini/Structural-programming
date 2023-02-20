#include <stdio.h>
#define MAX 1000

double max (double * niza, int n){
    return *(niza);
}

double min (double *niza, int n){
    return *(niza+n-1);
}

void normalize (double *niza, int n){
    int i;
    double x;
    for (i=0;i<n;i++){
        x = ((*(niza+i)-min(niza,n)) / (max(niza,n) - min(niza,n)));
        printf("%.3lf ",x);
    }
}

void sort(double *niza, int n){
    int i,j;
    double temp;
    for (i=0;i<n;i++){
        for (j=0;j<n-i-1;j++){
            if (*(niza+j) <= *(niza+j+1)){
                temp =  *(niza+j);
                *(niza+j) =  *(niza+j+1);
                *(niza+j+1) = temp;
            }
        }
    }

}


int main(){

    double niza[MAX];
    int i,n;
    scanf ("%d",&n);

    for (i=0;i<n;i++){
        scanf ("%lf",&niza[i]);
    }
    sort(niza,n);
    printf("MAX -> %.3lf\n",max(niza,n));
    printf("MIN -> %.3lf\n",min(niza,n));

    normalize (niza,n);


    return 0;
}
