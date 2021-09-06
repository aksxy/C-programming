/* The goto statement is known as jump statement in C. As the name suggests,
 goto is used to transfer the program control to a predefined label.
 The goto statement can be used to repeat some part of the code for a particular condition. */

// this is a Multiplication table example of goto statement

#include <stdio.h>
int main()
{
    int num,i=1;
    printf("Enter the number whose table you want to print : ");
    scanf("%d",&num);
table:
    printf("%d x %d = %d\n",num,i,num*i);
    i++;
    if(i<=10)
        goto table;
}
