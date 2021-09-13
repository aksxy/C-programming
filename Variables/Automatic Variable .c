/* AUTOMATIC VARIABLE

           All variables in C that are declared inside the block, are automatic variables by default. We
      can explicitly declare an automatic variable using auto keyword.Automatic variables are similar as
      local variables.
*/
#include <stdio.h>
void function()
{
    int x=10;//local variable (also automatic)
    auto int y=20;//automatic variable
}
int main()
{

    function();
    return 0;
}
