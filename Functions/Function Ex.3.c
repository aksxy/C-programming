#include<stdio.h>
int sum(void);
main()
{
    int ans;
    ans=sum();
    printf("\n ans = %d",ans);
}
int sum(void)
{
    int a,b,c;
    a=10;
    b=20;
    c=a+b;
    return c;
}

