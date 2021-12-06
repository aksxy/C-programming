//CONSTANT Ex: Write Multiple line in Constant using '\'.
#include<stdio.h>
#define greater(x,y) if(x>y) \
        printf("%d is greater then %d",x,y); \
        printf("%d is greater then %d",y,x);

main()
{
    greater(8,5);
    return 0;
}

