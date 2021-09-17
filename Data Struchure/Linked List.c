// LINKED LIST

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int info;
    struct Node *next;
};
main()
{
    struct Node *p,*first,*temp;
    p=(struct Node*)malloc(sizeof(struct Node));
    p->info=10;
    p->next=NULL;
    first=p;

    p=(struct Node*)malloc(sizeof(struct Node));
    p->info=20;
    p->next=first;
    first=p;

    p=(struct Node*)malloc(sizeof(struct Node));
    p->info=30;
    p->next=first;
    first=p;

    temp=first;
    while(temp!=NULL)
    {
        printf("\n%d",temp->info);
        temp=temp->next;
    }

}

