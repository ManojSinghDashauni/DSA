//insertion at the end of the List.

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};

void add_at_end(struct node *head,int data){
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}

void print_data(struct node *head){
    if(head==NULL)
        printf("Linked List is empty");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}


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
    head->link->link=current;
    
    add_at_end(head,67);//add_at_end
    
    print_data(head);//print
    
    return 0;
}

/*
OUTPUT
45      98      3       67
*/