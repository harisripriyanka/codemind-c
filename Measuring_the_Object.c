#include<stdio.h>
int main()
{
    int d,a,b,c;
    scanf("%d%d%d%d",&d,&a,&b,&c);
    if(d==a+b || d==b+c || d==c+a || d==a+b+c || d==a || d==b || d==c)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
}