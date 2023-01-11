#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float j;
    j=sqrt((double)n);
    i=j;
    if(i==j)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}