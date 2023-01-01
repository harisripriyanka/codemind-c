#include<stdio.h>
int main()
{
    int l,b,d,c;
    scanf("%d%d%d%d",&l,&b,&d,&c);
    int x;
    x=c*((l+2*d)*(b+2*d)-(l*b));
    printf("%d",x);
}