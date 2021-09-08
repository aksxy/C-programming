/*
   TYPEDEF
          //typedef use with structure
          //in this example we change struct student into std.
*/
#include<stdio.h>
typedef struct student
{
    int id;
    char name[15];
    float per;
} std; //this is a change of struct student into std.

main()
{
    std s1,s2;// using std as struct student.
    s1.id=56;
    s2.id=23;
    printf("the first id : %d",s1.id);
    printf("\nthe second id : %d",s2.id);
}

