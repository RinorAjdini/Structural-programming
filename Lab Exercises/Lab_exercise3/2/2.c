#include <stdio.h>
#include <math.h>
int main()
{
    int A[5]={};
    int a;float p;scanf("%d%f",&a,&p);
    int q=0;
    int proveri=0;
    for(int i=a;i>0;i--)
    {
        int k=i;
        int sumanacifri=0;
        while(k>0)
        {
            sumanacifri+=k%10;
            k=k/10;
        }
        if(p/100*i==sumanacifri)
        {
            proveri=1;
            A[q]=i;
            q++;
            if(q>4)
            break;
        }
    }
    if(proveri)
    {
    for(int i=0;i<5;i++)
    {
        if(A[i]!=0)
        printf("%d\n",A[i]);
    }
    }
    else
        printf("NEMA");
    return 0;
}

