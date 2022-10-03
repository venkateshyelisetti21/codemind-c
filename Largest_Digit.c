#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
       int r=n%10;
        if(r>s)
        {
            s=r;
        }
        n/=10;
    }
    printf("%d",s);
}