#include<stdio.h>
int main()
{
    int a,rev;
    int sum=0,pro=1;
    scanf("%d",&a);
    while (a!=0)
    {
        rev=a%10;
        sum+=rev;
        pro*=rev;
        a/=10;
    }
    if (sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}