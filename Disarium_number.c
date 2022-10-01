#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y,c=0;
    scanf("%d",&n);
    x=n;
    y=n;
    while(x!=0)
    {
      c+=1;
      x/=10;
    }
    int r,sum=0;
    while(y!=0)
    {
        r=y%10;
        sum+=pow(r,c);
        c-=1;
        y/=10;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}