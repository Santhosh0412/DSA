#include <stdio.h>
#include <stdlib.h>

struct lnode {
    int data;
    struct lnode *next, *prev;
};

typedef struct lnode node;
node *head = NULL;

void append(int data) {
    node *newnode, *temp;
    newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    temp = head;
    if (head == NULL) {
        head = newnode;
    } else {
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
    }
}

void insert(int pos, int data) {
    int i = 0;
    node *temp = head;
    while (i < pos && temp->next != NULL) {
        temp = temp->next;
        i++;
    }
    node *newnode = (node *)malloc(sizeof(node));
    newnode->prev = newnode->next = NULL;
    newnode->data = data;
    newnode->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = newnode;
    }
    newnode->prev = temp;
    temp->next = newnode;
}

void display() {
    node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int i, n, a;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        append(a);
    }
    display();
    int pos = 4, data = 199;
    insert(pos, data);
    display(); 
    return 0;
}