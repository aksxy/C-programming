//FGETC
//     simplest function to read single Character to the file

#include<stdio.h>
main()
{
    FILE *f1;
    f1=fopen("myfile.txt","r");
    char *c;
    c=fgetc(f1);
    printf("The Character I Read was : %c",c);

    fclose(f1);
}

