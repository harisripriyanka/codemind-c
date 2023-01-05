#include<stdio.h>
int main()
{
    int i,j,l;
    scanf("%d",&l);
    int a[l],b[l];
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<l;j++)
    {
        scanf("%d",&b[j]);
        printf("%d ",a[j]+b[j]);
    }
}