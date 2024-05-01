#include<stdio.h>
#define N 5 

int s1[N],s2[N];
int top1=-1,top2=-1;
int count =0;



void push1(int data){
    if(top1==-1){
        printf("Queue is empty");
    }
    else {
    top1++;
    s1[top1]=data;
}
}

int pop1(){
     return s1[top1--];
}
int pop2(){
    return s2[top2--];
}

void push2(int data){
    top2++;
    s2[top2]=data;
}








void enque(int x){
    push1(x);
    count ++;
}


void deque(){
    if (top1==-1 && top2==-1){
        printf("Queue is Empty !");
    }
    else {
        for ( int i=0;i<count;i++){
            int a = pop1();
            push2(a);
        }
         int b=pop2();

         printf("%d",b);                 //   Dequed successfuly here !

         count --;
         

         for (int j=0;j<count;j++){           //  To reput the elements back into stack 1 !!
            int a = pop2();
            push1(a);

         }

    }
}



void display(){
    for(int i =0 ; i<count ; i++){
        printf("%d",s1[i]);

    }
}