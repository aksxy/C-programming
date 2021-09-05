/* string Functions
This Function is Used to convert small letters into UPPER LETTERS string.
*/

//strupr()

#include<stdio.h>
#include<string.h>

main()
{
    char arr[15];
    printf("Enter Array : ");
    gets(arr);
    strupr(arr);
    printf("%s",arr);

}

