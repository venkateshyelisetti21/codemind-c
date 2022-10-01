#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,res=1;
        scanf("%d",&a);
        for(int j=1;j<=a;j++)
        {
            res*=j;
        }
        printf("%d",res);
        printf("
");
    }
    return 0;
}