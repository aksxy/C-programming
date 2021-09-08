/* string Functions
    This Function is Used to find last occurrence of the given
    character in the string it will return the address of found
    character.
*/

//strrchr()

#include<stdio.h>
main()
{
    char arr1[15];
    char *p;
    int i=0;
    printf("Enter first array : ");
    gets(arr1);
    printf("Address of char : ");
    while(arr1[i]!='\0')
    {
        printf("\n%u=%c",&arr1[i],arr1[i]);
        i++;
    }
    p=strrchr(arr1,'i');
    printf("\nFound address : ");
    printf("\n %u",p);
    printf("\n %s",p);
}
