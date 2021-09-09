// PASSING complete STRUCTURE to the FUNCTION

#include<stdio.h>
struct student
{
    int id;
    char name[15];
    float per;
};
show (struct student s2)
{
    printf("\n %d %s %f",s2.id,s2.name,s2.per);
}
display (struct student *p)
{
    printf("\n %d %s %f",p->id,p->name,p->per);
}
main()
{
    struct student s1= {101,"aksxy",75.65};
    show (s1);
    display (&s1);
}

