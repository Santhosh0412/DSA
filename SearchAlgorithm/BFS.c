#include <stdio.h>
#include <stdlib.h>


struct lnode {
    int data;
    struct lnode* left;
    struct lnode* right;
};
typedef struct lnode node;


node* head = NULL;


node* newnode(int data) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}


void append(int data) {
    node* new_node = newnode(data);
    if (head == NULL) {
        head = new_node;
    } else {
        node* temp = head;
        while (1) {
            if (data < temp->data) {
                if (temp->left != NULL) {
                    temp = temp->left;
                } else {
                    temp->left = new_node;
                    break;
                }
            } else {
                if (temp->right != NULL) {
                    temp = temp->right;
                } else {
                    temp->right = new_node;
                    break;
                }
            }
        }
    }
}
void inorder(node*head){
    if(head !=NULL){
        inorder(head->left);
        printf("%d\t",head->data);
        inorder(head->right);
    }
}

void preorder(node*head){
    if(head !=NULL){
        printf("%d\t",head->data);
        inorder(head->left);
        inorder(head->right);
    }
}

void postorder(node*head){
    if(head !=NULL){
        inorder(head->left);
        inorder(head->right);
        printf("%d\t",head->data);
    }
}
void lastnode(node*head,int*total_value){
    if(head !=NULL){
        lastnode(head->left,total_value);
        lastnode(head->right,total_value);
        if(head->left==NULL && head->right==NULL){
            *total_value+=head->data;
       
        }
    }
}

int height(node* head) {
    if (head == NULL) {
        return -1; 
    } else {
        
        int left_height = height(head->left);
        int right_height = height(head->right);

        
        if (left_height > right_height) {
            return left_height + 1;
        } else {
            return right_height + 1;
        }
    }
}

int main() {
    int n,i,data,total_value =0;
    printf("Enter the number of values:");
    scanf("%d",&n);
   for(i=0;i<n;i++){
       printf("Enter value %d: ", i + 1);
       scanf("%d", &data);
       append(data);
   }
     
    printf("\ninorder traversal:");
    inorder(head);
    printf("\npreorder traversal:");
    preorder(head);
    printf("\npostorder traversal:");
    postorder(head);
    lastnode(head,&total_value);
    printf("\ntotal of the leaf nodes:%d", total_value);
    
    printf("\nHeight of the tree: %d\n", height(head));
    return 0;
}
