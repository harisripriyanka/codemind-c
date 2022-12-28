#include<stdio.h>
int main()
{
    int x,a,b,c=0,s=0;
    scanf("%d",&x);
    if(x%5==0 && x%10!=0)
    {
        a=x%10;
        if(a==5)
        {
            c++;
        }
        b=x/10;
        s=b+c;
        printf("%d",s);
    }
    else if(x%5==0 && x%10==0)
    {
        x=x/10;
        printf("%d",x);
    }
    else
    {
        printf("-1");
    }
}