#include<stdio.h>
int main()
{
    int i,n,s=0,p=1,d=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        s=d+s;
        p=p*d;
        n=n/10;
    }
    printf("%d",p-s);
}