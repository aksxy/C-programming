//CHARECTEAR
#include<stdio.h>
#define MAX_LEN 20 //Define max length for your sentence;
main()
{
    char ch,s[20],sen[MAX_LEN];
    scanf("%c\n",&ch); //store character
    scanf("%s\n",&s); //store a string
    scanf("\n"); //  scanf("%[^\n]%*c",sen); this is not working without scanf("\n");
    scanf("%[^\n]%*c",sen); //this is for store a sentence
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
}

