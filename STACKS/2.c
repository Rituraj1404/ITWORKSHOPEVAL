#include<stdio.h>
#include<stdlib.h>
        

         
          // IMPLEMENTATION OF STACK USIING LINKED LISTS 


    struct node {
        int data ;
        struct node *link;
    };

struct node *top;
        

    void push(int x){
        struct node *newnode;
    
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=x;
        newnode->link=top;
        top=newnode;

    }

 
    void display(){
        struct node * temp;
        temp=top;
        while(temp!=0){
            printf("%d",&temp->data);
            temp=temp->link;
        }
    }

    void peek(){
        printf("%d",top->data);
    }


    void pop(){
        struct node * temp;
        temp=top;
        top=top->link;
        
        printf("Popped element is :",temp->data);
        free(temp);
    }


    

    int main(){
        push(3);
        push(4);
        push(69);
        display();
        peek();
        pop();
        peek();

        return 0;
    }