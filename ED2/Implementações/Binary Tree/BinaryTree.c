#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
struct Node{
  int info;
  Node *left, *right;
  int level;
};

Node *newNode(int data){
  Node *node = (Node*)malloc(sizeof(Node));
  node->info = data;
  node->left = NULL;
  node->right = NULL;
  node->level = 0;
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

void CL(Node *node, int l){
  if(node == NULL) return;
  node->level = l;
  CL(node->left, l+1);
  CL(node->right, l+1);
}

int height(Node *node, int l){
  if(node == NULL) return l - 1;

  int ls = height(node->left, l+1);
  int rs = height(node->right, l+1);
  if(ls > rs) return ls;

  return rs;
}

void transverse(node *node , void *visit){
  if(node == NULL){
    (*visit)(node);
    return;
  }

  transverse(node->left);
  (*visit)(node);
  transverse(node->right);
}

void printNode(Node *node){
  if(node == NULL) printf("*\n");
  else{
    printf("%d\n", node->info);
  }
}

int main(){
  Node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);

  printf("%d, %d, %d, %d\n", root->info, root->left->info, root->right->info, root->left->left->info);

  return 0;
}
