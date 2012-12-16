using namespace std;
#include<iostream>
#include<cstdio>
struct avl{
  int data,bal;
  avl *left,*right;
};
avl *root=NULL;
avl* makeNode(int data){
  avl *newNode=new avl;
  newNode->left=newNode->right=NULL;
  newNode->data=data;
  return newNode;
}
void insert(avl *head,int data){
  if(data<head->data){
    if(head->left==NULL)
      head->left=makeNode(data);
    else
      insert(head->left,data);
  }else{
    if(head->right==NULL)
      head->right=makeNode(data);
    else
      insert(head->right,data);
  }
}
void inorder(avl *head){
  if(head!=NULL){
    inorder(head->left);
    printf("%d ",head->data);
    inorder(head->right);
  }
}
int main(){
  int choice;
  do{
    avl *temp=root;
    printf("1.Insert 2.Inorder 3.Exit\noption:");
    scanf("%d",&choice);
    if(choice==1){
      int data;
      printf("Enter data to be inserted\n");
      scanf("%d",&data);
      if(root==NULL)
        root=makeNode(data);
      else
        insert(temp,data);
    }else if(choice==2){
      inorder(temp);
      putchar('\n');
    }else if(choice!=3){
      printf("Noob nc see the options again\n");
    }
  }while(choice!=3);
  return 0;
}