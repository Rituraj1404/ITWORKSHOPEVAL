#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
} *head,*tail;



void createDCLL(){
    struct node *newnode;
    int choice=1;
    head=0;
    while(choice){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter Data :\n");
        scanf("%d",&newnode->data);
        if(head==0){
            head=tail=newnode;
            newnode->next=head;
            newnode->prev=head;
        }
            else{
                tail->next=newnode; //1
                newnode->prev=tail; //2
                newnode->next=head; //3
                head->prev=newnode; //4
                tail=newnode;       //5
            }
            printf("Do you want to continue making new nodes (1/0)");
            scanf("%d",&choice);
        }
    }



    void display(){
        struct node *temp;
        temp=head;
        if (head==0)
        printf("List is empty");
        else{
            while(temp!=tail){               // All datas are printed except last one !!
                printf("%d  \n",temp->data);
                temp=temp->next;
            }
            printf("%d  \n",temp->data);
        }
    }


void delatfirst(){
    struct node * temp;
    head=head->next;
    head->prev=tail;
    tail->next=head;
    free(temp);
    
}

void delatlast(){
    struct node *temp;
    temp=tail;
    tail=tail->prev;
    tail->next=head;
    head->prev=tail;
    free(temp);
}

void delatpos(){
    struct node* temp;
    int pos;
    printf("Enter postion of node to delete : \n");
    scanf("%d",&pos);
    int i=1;
    temp=head;

    while (i<pos)   // (i<pos) When you WANT THE TEMP POINTER TO BE AT THE POS !!! WHILE (i<pos) if you want temp to be BEFORE THAT POS !!
    {
        temp=temp->next;
        i++;  
    }

    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}