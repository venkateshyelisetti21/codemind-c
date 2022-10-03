#include<stdio.h>
int main()
{
    int n,e=0,o=0;
    scanf("%d",&n);
    while(n!=0)
    {
        int r=n%10;
        if(r%2==0)
        {
            e+=1;
        }
        else
        {
            o+=1;
        }
        n/=10;
    }
    if(e!=0 && o==0)
    {
        printf("Even");
    }
    else
    {
        if(e==0 && o!=0)
        {
            printf("Odd");
        }
        else
        {
            printf("Mixed");
        }
    }
}