// ADDITION USING COMMAND LINE ARGUMENT

#include<stdio.h>
main(int argc,char *argv[])
{
    int a,b,c;
    printf("\n Number of Argument %d",argc);
    printf("\n First Argument %s",argv[0]);
    printf("\n Second Argument %s",argv[1]);
    printf("\n Third Argument %s",argv[2]);

    a=atoi(argv[1]);//This if for converting
    a=atoi(argv[2]);//  the char into integer
    c=a+b;
    printf("\n Addition is : %d",c);
}
/* Then Open Command Prompt and enter your exe file name and
      value if you want to addition.

      EX:- AdditionUsingCommandLine.exe 100 200

Then hit Enter and see your Addition.
*/
