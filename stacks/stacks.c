#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;

enum { true = 1, false = 0};

int isempty(){
    if (top == -1){
        return true;
    }
    else {
        return false;
    }
}

int isFull(){
    if (top == MAXSIZE) {
        return true;
    }
    else {
        return false;
    }
}

int peek(){
    return stack[top];
}

int pop(){
    int data;
    if (isempty() == false){
        data = stack[top];
        top = top - 1;
        return data;
    } 
    else {
        printf("Could not retrieve data, Stack is empty.\n");
        return false;
    }
}

void push(int data){
    if(isFull() == false){
        top = top + 1;
        stack[top] = data;
    } 
    else {
        printf("Could not insert data, Stack is full.\n");
    }
}

int main(void){
    int i;
    push(44);
    push(10);
    push(62);
    push(123);
    push(15);

    printf("Stack elements:\n");

    for (int i = 0; i < 8; i++){
        printf("%d ", stack[i]);
    }

    printf("\nStack top element: %d", pop());

    printf("\nStack elements popped: \n");
    while (isempty() == false) {
        int data = pop();
        printf("%d ", data);
    }
    
    printf("\nStack is full: %s", isFull()?"Yes":"No");
    printf("\nStack is empty: %s", isempty()?"Yes":"No"); 
    printf("\n");
    return 0;
}
