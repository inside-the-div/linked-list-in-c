#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head;

int main(){

    struct node *node_1,*node_2,*node_3,*node_4;
    struct node *temp;

    //define memory
    head = (struct node *)malloc(sizeof(struct node));
    node_1 = (struct node *)malloc(sizeof(struct node));
    node_2 = (struct node *)malloc(sizeof(struct node));
    node_3 = (struct node *)malloc(sizeof(struct node));
    node_4 = (struct node *)malloc(sizeof(struct node));

    //now set data
    head->data   = 10;
    node_1->data = 20;
    node_2->data = 30;
    node_3->data = 40;
    node_4->data = 150;

    //create link
    head->next = node_1;
    node_1->next = node_2;
    node_2->next = node_3;
    node_3->next = node_4;
    node_4->next = NULL;

    //print full link list
    printf("Your full link list is: ");
    temp = head; // description link why i use temp
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    return 0;

}
