#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}


void push(struct Node** top, int data) {
    struct Node* node = newNode(data);
    node->next = *top;
    *top = node;
}


int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    struct Node* temp = *top;
    *top = (*top)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}


int isEmpty(struct Node* top) {
    return top == NULL;
}


int evaluatePostfix(char* exp) {
    struct Node* stack = NULL;
    int i;

    
    for (i = 0; exp[i]; ++i) {
        
        if (isdigit(exp[i])) {
            push(&stack, exp[i] - '0');
        } else {
            
            int val1 = pop(&stack);
            int val2 = pop(&stack);

           
            switch (exp[i]) {
                case '+': push(&stack, val2 + val1); break;
                case '-': push(&stack, val2 - val1); break;
                case '*': push(&stack, val2 * val1); break;
                case '/': push(&stack, val2 / val1); break;
            }
        }
    }
    return pop(&stack);
}

int main() {
    char exp[] = "23*54*+9-";
    printf("Postfix evaluation: %d\n", evaluatePostfix(exp));
    return 0;
}