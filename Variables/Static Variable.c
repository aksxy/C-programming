/* STATIC VARIABLE

           A variable that retains its value between multiple function calls is known as static variable.
       It is declared with the static keyword.
*/
#include<stdio.h>
void function()
{
    int x = 20; //Local Variable
    static y = 30; //Static Variable
    x = x + 10;
    y = y + 10;
    printf("\n%d %d",x,y);
}
int main()
{
    function();
    function();
    function();
    function();
    function();
}
