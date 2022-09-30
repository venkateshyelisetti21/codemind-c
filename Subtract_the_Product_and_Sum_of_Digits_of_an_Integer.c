#include<stdio.h>
int main()
{
    int a,rev,res;
    int sum=0,pro=1;
    scanf("%d",&a);
    while (a!=0)
    {
        rev=a%10;
        pro*=rev;
        sum+=rev;
        a/=10;
    }
    res=pro-sum;
    printf("%d",res);
    return 0;
}