#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the stack node structure
struct Node {
    char data;
    struct Node* next;
};

// Function to create a new node
struct Node* newNode(char data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to push an element onto the stack
void push(struct Node** top, char data) {
    struct Node* node = newNode(data);
    node->next = *top;
    *top = node;
}

// Function to pop an element from the stack
char pop(struct Node** top) {
    if (*top == NULL) {
        return '\0'; // Return null character if stack is empty
    }
    struct Node* temp = *top;
    *top = (*top)->next;
    char popped = temp->data;
    free(temp);
    return popped;
}

// Function to check if the stack is empty
int isEmpty(struct Node* top) {
    return top == NULL;
}

// Function to remove k digits from the string
void removeKDigits(char* str, int k) {
    struct Node* stack = NULL;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        while (!isEmpty(stack) && k > 0 && str[i] < stack->data) {
            pop(&stack);
            k--;
        }
        push(&stack, str[i]);
    }

    while (!isEmpty(stack) && k > 0) {
        pop(&stack);
        k--;
    }

    // Collect the remaining elements from the stack
    char result[len + 1];
    int index = 0;
    while (!isEmpty(stack)) {
        result[index++] = pop(&stack);
    }
    result[index] = '\0';

    // Reverse the result to get the correct order
    for (int i = 0; i < index / 2; i++) {
        char temp = result[i];
        result[i] = result[index - i - 1];
        result[index - i - 1] = temp;
    }

    printf("Result: %s\n", result);
}

int main() {
    char str[] = "1432219";
    int k = 3;
    removeKDigits(str, k);
    return 0;
}