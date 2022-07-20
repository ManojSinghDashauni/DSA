//createing A sinlge linked list method-2.

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};

int main()
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node)); 
    //struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    
    struct node *current=malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;
    
    current=malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;
    head->link->link=current;//method-2
    
    printf("%d ",head->data);
    printf(" %d",current->data);
    printf(" %d",current->data);
    return 0;
}

/*
OUTPUT

45  3  3
*/