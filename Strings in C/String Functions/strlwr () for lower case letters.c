/* string Functions
This Function is Used to convert upper letters into SMALL LETTERS string.
*/

//strlwr()

#include<stdio.h>
#include<string.h>

main()
{
    char arr[15];
    printf("Enter Array : ");
    gets(arr);
    strlwr(arr);
    printf("%s",arr);

}

