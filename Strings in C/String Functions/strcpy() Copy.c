/* string Functions
This Function is Used to copy one string
into another string */

//strcpy()

#include<stdio.h>
#include<string.h>
main()
{
    char arr1[15],arr2[15];
    int i;
    printf("Enter Array : ");
    gets(arr1);
    strcpy(arr2,arr1);
    printf("%s",arr2);
}

