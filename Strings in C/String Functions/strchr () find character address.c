/* string Functions
This Function is Used to find FIRST Occurrence of the given
character in the string it will return address of the given
character.   */


//strchr()

#include<stdio.h>
#include<string.h>
main()
{
    char arr1[15];
    char *p;
    int i;
    printf("Enter first array : ");
    gets(arr1);
    for(i=0; i<5; i++)
    {
        printf("\n %u",&arr1[i]);
    }
    p=strchr(arr1,'l');
    printf("\n address of e is : %u",p);
}

