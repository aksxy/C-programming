/*CONSTASANT

            As the name suggests the name constants are given to such variables or values in C programming
        language which cannot be modified once they are defined. They are fixed values in a program.
        There can be any types of constants like integer, float, octal, hexadecimal, character constants, etc.
  */

#include <stdio.h>

int main()
{
    // int constant
    const int intVal = 10;

    // Real constant
    const float floatVal = 4.14;

    // char constant
    const char charVal = 'A';

    // string constant
    const char stringVal[10] = "ABC";

    printf("Integer constant:%d \n", intVal );
    printf("Floating point constant: %.2f\n", floatVal );
    printf("Character constant: %c\n", charVal );
    printf("String constant: %s\n", stringVal);

    return 0;
}
