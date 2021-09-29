// COMMAND LINE ARGUMENT

#include<stdio.h>
main(int argc,char *argv[])
{
    FILE *f1,*f2;
    char ch;
    f1=fopen(argv[1],"r");
    f2=fopen(argv[2],"w");
    printf("\n Number of Argument %d",argc);
    printf("\n First Argument %s",argv[0]);
    printf("\n Second Argument %s",argv[1]);
    printf("\n Third Argument %s",argv[2]);
    do
    {
        ch=fgetc(f1);
        if(ch!=EOF)
        {
            fputc(ch,f2);
        }
    }
    while(ch!=EOF);
    fclose(f1);
    fclose(f1);
    printf("\nFile Copied!");
}

/* Then Open Command Prompt and enter this exe file name and your
     file names to copy conent using command line

     EX:- CommandLineArgument.exe myfile.txt myfile1.txt

Then hit Enter And See Your files are Copyd!
*/
