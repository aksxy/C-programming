//FSCANF & FOPEN

#include<stdio.h>
main()
{
    FILE *f1;
    char ch[20];
    f1=fopen("myfile.txt","r");
    fscanf(f1,"%s",ch);
    printf("%s",ch);
    fclose(f1);
}

