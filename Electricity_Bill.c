#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float c,b,sc,tb;
    if(n<=199)
    {
        c=1.20;
    }
    else if(n>=200 && n<400)
    {
        c=1.40;
    }
    else if(n>=400 && n<600)
    {
        c=1.60;
    }
    else if(n>=600 && n<800)
    {
        c=1.80;
    }
    else
    {
        c=2.00;
    }
    b=n*c;
    if(b>400)
    {
        sc=b*0.15;
    }
    else
    {
        sc=0.0;
    }
    tb=b+sc;
    printf("Units Consumed: %d
",n);
    printf("Cost per Unit: %0.2f
",c);
    printf("Bill: %0.2f
",b);
    printf("Surcharge: %0.2f
",sc);
    printf("Total Amount: %0.2f",tb);
}