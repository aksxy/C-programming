#include <stdio.h>
main()
{
    char grade;
    printf("Enter your grade:");
    scanf("%c",&grade);
    switch(grade)
    {
    case 'A':
        printf("Excellent!!\n");
        break;

    case 'B':
        printf("Very Good!!\n");
        break;

    case 'C':
        printf("Good!!\n");
        break;

    case 'D':
        printf("Best!!\n");
        break;

    default:
        printf("This grade is Invalide!!");
    }
    printf("your grade is %c",grade);
}
