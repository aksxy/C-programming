//FPUTS
//     it is used to write single line(string) to the file

#include<stdio.h>
main()
{
    FILE *f1;
    f1=fopen("myfile.txt","w");
    fputs("hi am going to start code",f1);

    fclose(f1);
}

