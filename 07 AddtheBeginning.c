//insertion at the beginning of the List.

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node *add_beg(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=NULL;
    
    ptr->link=head;
    head=ptr;
    return head;
}

int main()
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node)); 
    //struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=98;
    ptr->link=NULL;
    head->link=ptr;

    int data=3;
    head=add_beg(head,data);

    ptr=head;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}

/*
OUTPUT
3       45      98
*/