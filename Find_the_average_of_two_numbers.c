#include<stdio.h>
int main()
{
    int a,b;
    float res;
    scanf("%d%d",&a,&b);
    res=float(a+b)/2;
    printf("%0.4f",res);
    return 0;
}