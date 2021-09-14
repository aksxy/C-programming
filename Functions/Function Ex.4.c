#include<stdio.h>
int add(int a,int b);
main()
{
    int a,b,ans;
    a=10;
    b=3;
    ans=add(a,b);
    printf("\n ans = %d",ans);
}
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

