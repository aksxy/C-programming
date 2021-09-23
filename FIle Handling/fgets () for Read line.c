//FPUTS
//     this function is used to read single line(string) from file

#include<stdio.h>
main()
{
    FILE *f1;
    f1=fopen("myfile.txt","r");
    char ch[50];
    fgets(ch,50,f1);
    printf("The Character I Read was : %s",ch);

    fclose(f1);
}

