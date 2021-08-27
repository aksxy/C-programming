#include<stdio.h>
main()
{
    int i=1;
    while(i<1000)
    {
        if(i%5==0 && i%11==0)
        {
            printf("\n%d",i);
        }
        i=i+1;
    }
}
