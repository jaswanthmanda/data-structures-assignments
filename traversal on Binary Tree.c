Write a C program to print preorder, inorder, and postorder traversal on Binary Tree. 
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* left;
struct node* right;
};
void inorder(struct node* root){
if(root==NULL)return;
inorder(root->left);
printf("%d->",root->data);
inorder(root->right);
}
void preorder(struct node* root){
if (root==NULL)return;
printf("%d->",root->data);
preorder(root->left);
preorder(root->right);
}
void postorder(struct node* root){
if (root==NULL)return;
postorder(root->left);
postorder(root->right);
printf("%d->",root->data);
}
struct node* createNode(int value){
struct node* newnode=malloc(sizeof(struct node));
newnode->data=value;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}
void main()
{
struct node*root=createNode(1);
root->left=createNode(12);
root->right=createNode(9);

root->left->left=createNode(10);
root->right->right=createNode(15);

printf("inorder traversal \t");
inorder(root);

printf("\npreorder traversal \t");
preorder(root);

printf("\npostorder traversal \t");
postorder(root);
}