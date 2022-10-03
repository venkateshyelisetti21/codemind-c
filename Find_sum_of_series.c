#include<stdio.h>
int main()
{
    float n;
    float s=0;
    scanf("%f",&n);
    for(float i=1;i<=n;i++)
    {
       s+=(1/i); 
    }
    printf("%0.2f",s);
}