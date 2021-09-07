/*
STRUCTURES
         //the structure is a user define data type
         //structure is used to group defrant data type into single unit
*/
#include<stdio.h>
struct student
{
    int id;
    char name[15];
    float per;
};
main()
{
    struct student s1,s2;
    printf("Enter first Student info : \n");
    scanf("%d %s %f",&s1.name,&s1.name,&s1.per);
    printf("Enter secound Student info : \n");
    scanf("%d %s %f\n",&s2.name,&s2.name,&s2.per);
    printf ("First student info :\n");
    printf("id is : %d\nname is : %s\nper is : %f\n",s1.id,s1.name,s1.per);
    printf ("\nScound student info :\n");
    printf("id is : %d\nname is : %s\nper is : %f\n",s2.id,s2.name,s2.per);
}

