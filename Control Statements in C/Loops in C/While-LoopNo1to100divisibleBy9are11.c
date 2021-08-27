#include<stdio.h>
main()
{
    int i=1;
    while(i<100)
    {
        if(i%9==0 || i%11==0)
        {
            printf("\n%d",i);
        }
        i=i+1;
    }
}
