#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define max 1000
float k=0;
float rekurz(int A[],int n)
{
    if(n==0)
        return k+A[0];
    else
    {
        k=1.0/(A[n]+k);
    }
    rekurz(A,n-1);
}
int main() {
   int n;scanf("%d",&n);
   int A[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&A[i]);
   }
    printf("%f",rekurz(A,n-1));
	return 0;

}
