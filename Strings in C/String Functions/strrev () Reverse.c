/* string Functions
This Function is Used to show Reverse of a string.
*/

//strrev()

#include<stdio.h>
#include<string.h>

main()
{
    char arr[15];
    printf("Enter Array : ");
    gets(arr);
    strrev(arr);
    printf("%s",arr);

}
