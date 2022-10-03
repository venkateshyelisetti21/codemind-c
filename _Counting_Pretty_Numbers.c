#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,b,cnt=0;
        scanf("%d%d",&a,&b);
        for(int j=a;j<=b;j++)
        {
            if(j!=0)
            {
                int r=j%10;
                if(r==2 || r==3 || r==9)
                {
                    cnt+=1;
                }
            }
        }
        printf("%d",cnt);
        printf("
");
    }
}