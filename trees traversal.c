
#include<stdio.h>
#include<stdlib.h>
struct tnode
{
    int data;
    struct tnode *left;
    struct tnode *right;
};
struct tnode* create(int value)
{
  struct tnode* newnode= (struct tnode*)malloc(sizeof(struct tnode));
  newnode->data = value;
  newnode->left = NULL;
  newnode->right = NULL;
  return(newnode);
}
void inorder(struct tnode *t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        printf("%d ",t->data);
        inorder(t->right);
    }
}
void postorder(struct tnode *t)
{
    if(t!=NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%d ",t->data);
    }
}
void preorder(struct tnode *t)
{
    if(t!=NULL)
    {
        printf("%d ",t->data);
        preorder(t->left);
        preorder(t->right);
    }
}

int main()
{
  struct tnode *root = create(5);
   root->right = create(10);
   root->left = create(15);
   root->left->left  = create(20);
   root->left->right  = create(25);
   root->right->left=create(30);
   root->right->right=create(35);
   root->left->left->left  = create(40);
   root->right->right->right=create(45);
   printf("tree traversal in inorder ");
   inorder(root);
   printf("tree traversal in preorder ");
   preorder(root);
   printf("tree traversal in postorder ");
   postorder(root);
  getchar();
  return 0;
}
