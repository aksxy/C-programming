//FPRINTF

#include<stdio.h>
main()
{
    FILE *f1;
    char ch[50]="hi am Akshay";
    f1=fopen("myfile.txt","w");
   fprintf(f1,"%s",ch);
   printf("the content of this file has : %s\n",ch);
    fclose(f1);
}

