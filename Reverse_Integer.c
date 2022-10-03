#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,s=0;
    scanf("%d",&n);
    x=n;
    int y=n;
    int tmp=0;
    while(y!=0)
    {
      tmp+=1;
      y/=10;
    }
    while(x!=0)
    {
      int r=x%10;
      s+=(r*pow(10,tmp-1));
      tmp-=1;
      x/=10;
    }
    printf("%d",s);
}