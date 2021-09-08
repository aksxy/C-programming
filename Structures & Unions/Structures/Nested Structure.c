/* NESTED STRUCTURE

    One structure can be include into another this is called
    Nesting of Structure.

*/

#include<stdio.h>
/*struct marks
{

   int m1,m2;   // this is a first method to declared  nested structure

};  */
struct student
{
    int id;
    char name[15];
    //struct marks ob;

    struct marks
    {
        int m1,m2;  // and this is a second method for declared  nested structure
    } ob;

    // struct marks ob;  //you also declared  like this
};
main()
{
    struct student s1;
    printf("Enter Data : ");
    scanf("%d %s %d %d",&s1.id,&s1.name,&s1.ob.m1,&s1.ob.m2);
    printf("\nYour Data : ");
    printf("%d %s \n %d %d",s1.id,s1.name,s1.ob.m1,s1.ob.m2);
}

