//08 insertion at the beginning of the List 2nd method.

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};

//add double **
struct node *add_beg(struct node **head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=NULL;
    
    ptr->link=*head;//add * in head
    *head=ptr;  //add * in head
    //return head; no need return
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
    add_beg(&head,data);//see code 07,add &
    
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