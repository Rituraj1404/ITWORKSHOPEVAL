#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *next ;
};
struct node *head;

void creationCLL(){
    struct node *temp,*newnode;
    int choice=1;
    head=0;
    while(choice){

    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter Data : \n");
    scanf("%d",&newnode->data);
    newnode->next=0;

    if (head==0){
        temp=head=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    
    temp->next=head;  //  Important line  

    printf("Do you want to continue ? (1/0)\n");
    scanf("%d",&choice);
}
}



void displayCLL(){

struct node*temp;
temp=head;
if(head==0)
printf("List is Empty ");
else {
while(temp->next!=head){
    printf("%d",temp->data);
    temp=temp->next;   
}
printf("%d",temp->data);
}
}





int main(){
    creationCLL();
    displayCLL();
return 0;

}
