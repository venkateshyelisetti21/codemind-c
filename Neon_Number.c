#include<stdio.h>
int main()
{
    int x,rev,sq,a;
    int sum=0;
    scanf("%d",&x);
    a=x;
    sq=a*a;
    while (sq!=0)
    {
        rev=sq%10;
        sum+=rev;
        sq/=10;
    }
    if(x==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}