#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node*link;
};

int main(){
    struct node *head=NULL;
    head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    
    struct node*current=NULL;
    current = malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;
    
    current=malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;
    head->link->link=current;
    printf("%u",head->link->link);  
}