#include<stdio.h>
int main()
{
    int x,a,rev,tmp;
    int sum=0;
    scanf("%d",&x);
    a=x;
    while (a!=0)
    {
        rev=a%10;
        tmp=1;
        for(int i=1;i<=rev;i++)
        {
           tmp*=i; 
        }
        sum+=tmp;
        a/=10;
    }
    if (x==sum)
    {
        printf("The number %d is a strong number",x);
    }
    else
    {
        printf("The number %d is not a strong number",x);
    }
    return 0;
}