#include <stdio.h>
int main()
{
    char latinskibukvi[26];
    for(char i='A';i<='Z';i++)
    {
        latinskibukvi[i-'A']=i;
    }
    char bukva;int k;
    scanf("%c %d",&bukva,&k);
    k=k%26;
    int d=((bukva-'A')+k)%26;
    printf("%c",latinskibukvi[d]);
    return 0;
}
