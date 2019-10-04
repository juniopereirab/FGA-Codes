#include <stdio.h>
#include <stdlib.h>
typedef struct Node Node;
struct Node{
  int info;
  Node *left, *right;
};

Node *newNode(int data){
  Node *node = (Node*)malloc(sizeof(Node));
  node->info = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}

void freeNode(Node* node){
  if(node == NULL);
    return;

  freeNode(node->left);
  freeNode(node->right);
  free(node);
  node = NULL;
}

void freeTree()

int main(){
  Node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);

  printf("%d, %d, %d, %d", root->info, root->left->info, root->right->info, root->left->left->info);

  return 0;
}
