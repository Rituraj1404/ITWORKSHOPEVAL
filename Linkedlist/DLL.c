#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
    struct node * prev;
};

struct node *head;

void create(){
    struct node *temp,*newnode;
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
        head=temp=newnode;
    }
    else{
        
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }

    printf("Do you want to continue :(1/0)");
    scanf("%d",&ch);


}
}

void display(){
    struct node *temp;
    temp=head;
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;

    }

}



int main(){

    create();
    display();

    return 0;

}