/* string Functions
This Function is Used to combine two given strings  */

//strcat()

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
    strcat(arr1,arr2);
    printf("%s",arr1);
}
