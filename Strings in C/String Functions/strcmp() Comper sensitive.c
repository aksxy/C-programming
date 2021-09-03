/* string Functions
This Function is Used to Compare tow Given strings
ex:- Passwords
it is a case sensitive */

//strcmp()

#include<stdio.h>
#include<string.h>
main()
{
    char arr1[15],arr2[15];
    int i;
    printf("Enter First Array : ");
    gets(arr1);
    printf("Enter Second Array : ");
    gets(arr2);
    i=strcmp(arr1,arr2);
    if(i==0)
    {
        printf("String are Equal!");
    }
    else
    {
        printf("String are not Equal!");
    }
}

