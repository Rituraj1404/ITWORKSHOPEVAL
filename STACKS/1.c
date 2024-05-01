#include<stdio.h>


// Implementation of STACK using Array 

int n = 5;
int stack[5];
int top=-1;

void push(){
    int data;
    printf("Enter the data :  ");
    scanf("%d",&data);
    if(top==n-1){
        printf("OVERFLOW");
    }

    else{
        top++;
        stack[top]=data;
    }
} 



void pop(){

    int item;
    if(top==-1)
    printf("UNDERFLOW");
    else{
        item=stack[top];
        top--;
        printf("Item removed was : %d \n", item);
 
    }
}


void peek(){
    if(top==-1)
    printf("Stack is Empty \n");
    else{
        printf("TOP element is %d", stack[top]);
    }
}


void display(){
    for(int i=top;i>=0;i--){
        printf("Elements are : \n  %d", stack[i]);
    }

}


int main(){


push();
pop();
peek();
display();

}