#include <stdio.h>
#define MAX 100
int main()
{
    int a[MAX];
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        a[i]++;
        else
        a[i]--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i!=n-1)
        printf(" ");
    }


    return 0;
}
