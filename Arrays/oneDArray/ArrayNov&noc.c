#include<stdio.h>
main()
{
    char arr[5];
    int i,nov=0,noc=0;
    printf("Enter Char Array : ");
    for(i=0; i<5; i++)
    {
        scanf("%c",&arr[i]);
    }
    for(i=0; i<5; i++)
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
        {
            nov++;
        }
        else
        {
            noc++;
        }
    }
    printf("\n Number of Vowels :%d",nov);
    printf("\n Number of Consonants :%d",noc);
}
