#include <stdio.h>
#include <stdlib.h>

struct lnode {
    int data;
    struct lnode *next, *prev;
};

typedef struct lnode node;
node *head1 = NULL;
node*head2 = NULL;
node*head =NULL;
void append1(int data) {
    node *newnode, *temp;
    newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    temp = head1;
    if (head1 == NULL) {
        head1 = newnode;
    } else {
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
    }
}

void append2(int data) {
    node *newnode, *temp;
    newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    temp = head2;
    if (head2 == NULL) {
        head2 = newnode;
    } else {
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
    }
}
void insert(int pos){
    node*temp1=head1;
    node*temp2=head2;
    int i=1;
    while(i<pos){
        temp1=temp1->next;
        i++;
    }
    node*ptr=temp1->next;
    temp1->next=head2;
    head2->prev=temp1;
    while(temp2->next!= NULL){
        temp2=temp2->next;
    }
    ptr->prev=temp2;
    temp2->next=ptr;
}
void display1() {
    node *temp = head1;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void display2() {
    node *temp = head2;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void display() {
    node *temp = head1;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    int i, n, a1,a2,pos;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter the value:");
        scanf("%d", &a1);
         append1(a1);
    }
    display1();
    for (i = 0; i < n; i++) {
        printf("Enter the value:");
        scanf("%d", &a2);
        append2(a2);
    }
    display2();   
    
    printf("Enter the position to insert list 2 into list 1: ");
    scanf("%d", &pos);
    insert(pos);
    display();
    return 0;
    }