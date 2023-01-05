#include<stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    float s=0,k=0;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                if(i!=j)
                {
                    a[j]=0;
                }
            }
        }
        if(a[i]==c)
        {
            s=s+a[i];
            k++;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
    else
    {
        printf("%0.2f",s/k);
    }
}