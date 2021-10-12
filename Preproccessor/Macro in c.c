/*MACRO
       it is used to short hand code in the C program using MACROS you can Create your own
    language we can create Macros using #define.
*/
#include<stdio.h>
#define PI 3.14

main()
{
    float a,r;
    printf("Enter Radius :");
    scanf("%f",&r);
    a=PI*r*r;
    printf("Area is : %f",a);
}

