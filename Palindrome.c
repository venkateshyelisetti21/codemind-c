#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,tmp=0,x,y;
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
     tmp+=1;
     x/=10;
    }
    y=n;
    while(y!=0)
    {
        int r=y%10;
        s+=(r*pow(10,tmp-1));
        tmp-=1;
        y/=10;
    }
    if(n==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}