// string Functions
// This Function is Used to fine the length of string

//strlen()

#include <stdio.h>
#include<string.h>
main()
{
    char arr[15];
    int i;
    printf("Enter Array : ");
    gets(arr);
    i=strlen(arr);
    printf("length of string is : %d",i);
}

