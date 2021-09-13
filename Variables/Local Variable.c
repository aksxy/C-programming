/* LOCAL VARIABLE

          A variable that is declared and used inside the function or block is called local variable.
      It’s scope is limited to function or block. It cannot be used outside the block.Local variables
      need to be initialized before use.
*/
#include<stdio.h>
void function()
{
    int x = 10; //Local Variable
}
int main()
{
    function();
}
