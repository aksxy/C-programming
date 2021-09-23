// FPUTC
//      simplest function to write character to a file is FPUTC

#include<stdio.h>
main()
{
    FILE *f1;
    f1=fopen("myfile.txt","w");
    fputc('A',f1);

    fclose(f1);
}

