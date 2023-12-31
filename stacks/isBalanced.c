#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


#define MAX_SIZE 100

typedef struct {
    char stack[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack* stack){
    stack->top = -1;
}

bool is_empty(Stack* stack){
    return stack->top == -1;
}

bool is_full(Stack* stack){
    return stack->top == MAX_SIZE - 1;
}

void push(Stack* stack, char symbol){
    if (is_full(stack)){
        printf("Stack overflow!\n");
        exit(1);
    }
    stack->stack[++stack->top] = symbol;
}

char pop(Stack* stack){
    if (is_empty(stack)){
        printf("Stack underflow!\n");
        exit(1);
    }
    return stack->stack[stack->top--];
}

bool is_balanced(const char* expression){
    Stack stack;
    initialize(&stack);

    const char* opening_symbols = "([{";
    const char* closing_symbols = ")]}";
    
    for (int i = 0; expression[i] != '\0'; i++){
        char symbol = expression[i];

        if (strchr(opening_symbols, symbol) != NULL){
            push(&stack, symbol);
        }
        else if (strchr(closing_symbols, symbol) != NULL){
            if (is_empty(&stack)){
                return false;
            }

            char opening_symbol = pop(&stack);
            const char* matching_opening_symbol = strchr(opening_symbols, opening_symbol);
            const char* matching_closing_symbol = strchr(closing_symbols, symbol);
            
            if (matching_opening_symbol - opening_symbols != matching_closing_symbol - closing_symbols){
                return false;
            }
        }
    }
    return is_empty(&stack);
}

int main(void){
    printf("%d\n", is_balanced("()"));
    printf("%d\n", is_balanced("({[]})")); 
    printf("%d\n", is_balanced("({)}"));
    printf("%d\n", is_balanced("[[[]]]"));
    printf("%d\n", is_balanced("(]"));
}

