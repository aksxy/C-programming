/* string Functions
This Function is Used to Compare tow Given strings

it is Not a case sensitive */

//strcmpi()

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

    i=strcmpi(arr1,arr2);

    if(i==0)
    {
        printf("String are Equal!");
    }
    else
    {
        printf("String are not Equal!");
    }
}


