#include<stdio.h>
int main()
{
    int t,s=0;
    scanf("%d",&t);
    for(int i=1;i<t;i++)
    {
        if (t%i==0)
        {
            s+=i;
        }
    }
    if(s>t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    return 0;
}