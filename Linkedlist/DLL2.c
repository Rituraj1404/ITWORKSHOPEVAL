#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node * prev;
};

struct node *head ,*tail;

void create(){
    struct node *newnode;
    int i=1;
    head=0;
    int ch=1;

    while(ch){

    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data :\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;

    if(head==0){
        head=tail=newnode;
    }
    else{
        
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }

    printf("Do you want to continue :(1/0)");
    scanf("%d",&ch);


}
}

void display(){
    struct node *temp;
    temp=head;
    while(temp!=0){
        printf("%d \n",temp->data);
        temp=temp->next;

    }

}

void reversal(){
    struct node *temp1,*temp2;

    temp1=head;
    while(temp1!=0){
        temp2=temp1->next;
        temp1->next=temp1->prev;
        temp1->prev=temp2;
        temp1=temp2;
    }
    temp1=head;
    head=tail;
    tail=temp1;
}



int main(){

    create();
    display();
    reversal();
    display();

    return 0;

}