#include<stdio.h>
int main()
{
    int t,l;
    scanf("%d",&l);
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int w,h;
        scanf("%d%d",&w,&h);
        if(w<l || h<l)
        {
            printf("UPLOAD ANOTHER");
        }
        else
        {
            if(w==h)
            {
                printf("ACCEPTED");
            }
            else
            {
                printf("CROP IT");
            }
        }
    printf("
");
    }
    return 0;
}