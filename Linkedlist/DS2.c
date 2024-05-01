#include<stdio.h>
#include<stdlib.h>

//Circular Linked List

struct node {
    int data;
    struct node  *next;
   };



void traversalinLinkedList(struct node *head)
{
struct node *p=head;
    do{
        printf("Element: %d\n",p->data);
        p=p->next;

    }while(p!=head);
   
    }




 struct node* insertatfirst(struct node *head, int value ){
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data=value;
    struct node *p=head->next;
    while(p->next!=head){

        p=p->next;
    }
     p->next=ptr;
     ptr->next=head;
     head=ptr;

     return head;

}






int main(){

//Allocating Memory for Nodes in Heap

   struct node *head , *b , *c, *d, *e, *f;


head=(struct node*)malloc(sizeof(struct node));
   b=(struct node*)malloc(sizeof(struct node));
   c=(struct node*)malloc(sizeof(struct node));
   d=(struct node*)malloc(sizeof(struct node));
   e=(struct node*)malloc(sizeof(struct node));
   f=(struct node*)malloc(sizeof(struct node));


   head->data=0;
   head->next=b;

 //Linking second with third

   b->data=5;
   b->next=c;

  

   c->data=7;
   c->next=d;

// and so on..

   d->data=11;
   d->next=e;

   e->data=23;
   e->next=f;

   f->data=40;
   f->next=head;

printf("LL before insertion:");

traversalinLinkedList(head);

    head = insertatfirst(head,80); 

    printf("LL after insertion:");

traversalinLinkedList(head);






   



    return 0;
}