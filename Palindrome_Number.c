#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
    int t,i,n,r,s=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    if(s==t)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
    
}