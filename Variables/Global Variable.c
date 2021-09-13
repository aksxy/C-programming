/* GLOBAL VARIABLE

        A variable that is declared outside the function or block is called a global variable.
    It is declared at the starting of program. It is available to all the functions.
*/
#include<stdio.h>
int x = 20; //Global Variable
void function1()
{
    printf("%d\n",x);
}
void function2()
{
    printf("%d\n",x);
}
int main()
{
    function1();
    function2();
}
