#include<stdio.h>
int main()
{
    int m,n,i,c,d,b;
    scanf("%d%d",&m,&n);
    for(i=m+1;i<n;i++)
    {
        c=i*i;
        d=i*i*i;
        printf("%d ",i);
        printf("%d ",c);
        printf("%d
",d);
    }
}