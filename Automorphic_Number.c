#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,m=0,c=0,j,l=0,k;
    scanf("%d",&n);
    j=n;
    while(n!=0)
    {
        m=n%10;
        c++;
        n/=10;
    }
    i=j*j;
    l=pow(10,c);
    k=i%l;
    if(k==j)
    {
        printf("Automorphic Number");
    }
    else 
    {
        printf("Not an Automorphic Number");
    }
}