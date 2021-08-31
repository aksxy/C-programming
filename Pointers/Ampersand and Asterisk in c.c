#include<stdio.h>
main()
{
  int a=5;
  int *q=&a;
  printf("%d\n",&a);  //this is address of a =(&)
  printf("%d\n",a);     //and this is show what is in = a(5)
  printf("%d",*q);   //what is in Address (*)
}

