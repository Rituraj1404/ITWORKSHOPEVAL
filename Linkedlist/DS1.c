#include<stdio.h>
#include<stdlib.h>



struct node {
    int data;
    struct node  *next;
   };



void traversalinLinkedList(struct node *p)
{
    while(p!=NULL){
        printf("Element : %d \n", p->data);
        p = p->next;
    }
}


   //case1 : Deletion at first node  
struct node* deletefirst(struct node *head){
    struct node *p=head;
    head=p->next;
    free(p);
    return head;
}




// case2: Deletion at an index 

void deleteatindex(struct node*head,int index){
    struct node *p=head;
    struct node *q=head->next;
    for( int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);



void deletionatlast(struct node *head){
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    
}
    


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
   f->next=NULL;



   printf("List before deletion :");
   traversalinLinkedList(head);

   head=deletefirst(head);  // 1. DELETION AT FIRST 
   deleteatindex(head,2);   // 2. DELETION AT ANY INDEX
   deletionatlast(head);    // 3. DELETION AT LAST 

   printf("List before deletion :");
   traversalinLinkedList(head);

   

    return 0;
}