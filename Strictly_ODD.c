#include<stdio.h>
int main()
{
    int n,a[20],c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[i]%2!=0)
            {
                c+=1;
            }
        }
    }
    if(c!=0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}