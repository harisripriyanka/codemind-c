#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    char c;
    for(i=1;i<=n;i++)
    {
        for(c=1;c<=n;c++)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
    
}