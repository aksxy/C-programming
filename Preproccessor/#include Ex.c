/*INCLUDE DIRECTRY
              - This Directory is used to Include the content of one file into another file.
              - The <stdio.h> file is replaced by the content of stdio.h file called expanded code.
              - We can also create user define header file.
              #include<myheader.h>
              #include"myheader.h"
              - When we used first syntax compiler search header file in the include file folder
                   and we used second syntax then compiler search header file in the current folder.
 */

#include<stdio.h>
#include"myheader.h"
main()
{
    int a;
    a=add(100,200);
    printf("\n%d",a);
    a=sub(500,100);
    printf("\n%d",a);
}

