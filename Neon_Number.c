#include<stdio.h>
int main()
{
    int n,sqr,r,s=0;
    scanf("%d",&n);
    sqr=n*n;
    while(sqr!=0)
    {
        r=sqr%10;
        s=s+r;
        sqr=sqr/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}