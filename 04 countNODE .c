//traversing A sinlge linked list count node.

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head){
    int count = 0;
    if(head==NULL)
        printf("Linked List is empty");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;
    }
    printf(" %d",count);
}

int main()
{
    struct node *head=NULL;
    
    
    count_of_nodes(head);
    
    return 0;
}

/*
OUTPUT
Linked List is empty 0
*/