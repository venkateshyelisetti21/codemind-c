#include<stdio.h>
int main()
{
    int n;
    int res;
    scanf("%d",&n);
    if(n>2)
    {
        res=(n*(n-3))/2;
        printf("%d",res);
    }
}