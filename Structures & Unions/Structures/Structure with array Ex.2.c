/*
STRUCTURES
         //Using Structure with array
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
    struct student s[3];
    int i;
    printf("Enter Students info : \n");
    for(i=0; i<3; i++)
    {
        scanf("%d %s %f",&s[i].id,&s[i].name,&s[i].per);
    }
    printf ("students info :\n");
    for(i=0; i<3; i++)
    {
        printf("id is : %d\nname is : %s\nper is : %f\n",s[i].id,s[i].name,s[i].per);
    }


}
