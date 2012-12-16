//1. normal tree 
//2.avl tree
using namespace std;
#include<iostream>
#include<cstdio>
class node{
public:
  int data,bal;
  node *left,*right;
  node(){
    left=right=NULL;
  }
  node* makeNode(int data);
}t;
node* node::makeNode(int data){
  node *newNode=new node;
  newNode->data=data;
  return newNode;
}
class avl{
public:
  node *root;
  avl(){
    root=NULL;
  }
  void inorder(node *head);
  void insert(node *head,int data);
};
void avl::insert(node *head,int data){
  if(root==NULL){
    root=t.makeNode(data);
  }else{
    if(head==NULL)
      head=t.makeNode(data);
    else if(head->data>data)
      insert(head->left,data);
    else
      insert(head->right,data);      
  }
}
void avl::inorder(node *head){
  if(head!=NULL){
    inorder(head->left);
    printf("%d ",head->data);
    inorder(head->right);
  }
  putchar('\n');
}
int main(){
  int choice;
  avl tree;
  do{
    printf("1.Insert 2.Inorder 3.Exit\noption:");
    scanf("%d",&choice);
    node *temp=tree.root;
    if(choice==1){
      int data;
      printf("Enter data to be inserted\n");
      scanf("%d",&data);
      tree.insert(temp,data);
    }else if(choice==2){
      tree.inorder(temp);
    }else{
      printf("Noob nc see the options again\n");
    }
  }while(choice!=3);
  
  return 0;
}