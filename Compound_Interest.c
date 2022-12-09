#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,ci;
    scanf("%f%f%f",&p,&r,&t);
    ci=pow((1+r/100.0),t);
    printf("%.2f",p*ci-p);
}