/* string Functions
    This Function is Used to find the occurrence of the Substring
    in the given string it will return the address of found String.
*/

//strstr()

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

    p=strstr(arr1,"world");
    if(p==NULL)
    {
        printf("\n String Not Found!");
    }
    else
    {
        printf("\n Found Address : \n");
        printf("\n %u",p);
    }
}

