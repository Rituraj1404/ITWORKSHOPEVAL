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
            newnode->next=newnode;
            newnode->prev=newnode;
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
                printf("%d",temp->data);
                temp=temp->next;
            }
            printf("%d",temp->data);
        }
    }



    void insertatBeg(){
        struct node * newnode;
        newnode=(struct node *)malloc(sizeof (struct node));
        printf("Enter data to be inserted : ");
        scanf("%d",&newnode->data);
        if (head==0){
            head=tail=newnode;
            head->prev=newnode;
            head->next=newnode;
        }
        else{
            newnode->next=head;
            head->prev=newnode;
            newnode->prev=tail;
            tail->next=newnode;
            head=newnode;

        }
    }


int main(){
    createDCLL();
    display();
    insertatBeg();

    return 0;
}