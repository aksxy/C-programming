
// FUNCTIONS

#include<stdio.h>
void add()
{
    int a,b,c;
    printf("\n Enter 2 Numbers : ");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("\n Addition is : %d",c);
}
void area()
{
    float a,r;
    printf("\n Enter Radius of Circle : ");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("\n Area is : %f",a);
}
void main()
{
    add();
    area();
}
