#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,c,p,m;
    scanf("%d%d%d",&x,&y,&c);
    p=pow(x,y);
    m=p%c;
    printf("%d",m);
}