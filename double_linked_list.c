#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
void main(){
    struct node *head1=malloc(sizeof(struct node));
    head1->prev=NULL;
    head1->data=40;
    head1->next=NULL;

    struct node *head2=malloc(sizeof(struct node));
    head2->prev=head1;
    head2->data=50;
    head2->next=NULL;
    head1->next=head2;

    struct node *head3=malloc(sizeof(struct node));
    head3->prev=head2;
    head3->data=60;
    head3->next=NULL;
    head2->next=head3;

    struct node *head4=malloc(sizeof(struct node));
    head4->prev=head3;
    head4->data=70;
    head4->next=NULL;
    head3->next=head4;

    struct node *head5=malloc(sizeof(struct node));
    head5->prev=head4;
    head5->data=80; 
    head5->next=NULL;
    head4->next=head5;

    struct node *head6=malloc(sizeof(struct node));
    head6->prev=head5;
    head6->data=90;
    head6->next=NULL;
    head5->next=head6;

    struct node *head7=malloc(sizeof(struct node));
    head7->prev=head6;
    head7->data=10;
    head7->next=NULL;
    head6->next=head7;

    struct node *head8=malloc(sizeof(struct node));
    head8->prev=head7;
    head8->data=20;
    head8->next=NULL;
    head7->next=head8;

    struct node *head9=malloc(sizeof(struct node));
    head9->prev=head8;
    head9->data=30;
    head9->next=NULL;
    head8->next=head9;

    struct node *head10=malloc(sizeof(struct node));
    head10->prev=head9;
    head10->data=100;
    head10->next=NULL;
    head9->next=head10;

    //double linked list of 10 nodes is appended. 

    struct node *current=malloc(sizeof(struct node));
    current->prev=head2;
    current->data=200;
    current->next=head3;

    struct node *ptr=head1;
    printf("Initial linked list: \n");
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("\n\n");

    head2->next=current;
    head3->prev=current;
    
    printf("A node has been added between 2 and 3 successfully!\n");
    struct node *ptr11=head1;
    while(ptr11!=NULL){
        printf("%d->",ptr11->data);
        ptr11=ptr11->next;
    }
    
    printf("\n\n");
    
    head8->prev=NULL;
    head8->data=20;
    head8->next=NULL;
    free(head8);
    head7->next=head9;
    head9->prev=head7;
    
    printf("Node-8 has been deleted successfully!\n");
    struct node *ptr111=head1;
    while(ptr111!=NULL){
        printf("%d->",ptr111->data);
        ptr111=ptr111->next;}
}