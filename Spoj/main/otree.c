#include<stdio.h>
#include<stdlib.h>
struct tree
{
	int data,counter;
	struct tree *left,*right;
}*head=NULL;
void insert(struct tree **temp,struct tree *node){
	
	if((*temp)->right==NULL&&node->data>(*temp)->data){
		(*temp)->right=node;
	}
	else if((*temp)->right!=NULL&&node->data>(*temp)->data){
		insert(&(*temp)->right,node);

	}
	else if((*temp)->left==NULL&&node->data<(*temp)->data){
		(*temp)->left=node;
	}
	else if((*temp)->left!=NULL&&node->data<(*temp)->data){
		insert(&(*temp)->left,node);
	}
	else if(node->data==(*temp)->data){
		if((*temp)->left==NULL&&(*temp)->right==NULL){
			//printf("x");
			*temp=NULL;
			//temp=NULL;

		}
		else if((*temp)->left==NULL&&(*temp)->right->left==NULL){
			(*temp)->data=(*temp)->right->data;
			(*temp)->right=(*temp)->right->right;
			(*temp)->left=NULL;
			//printf("done");
			//free(temp);
		}
		else if((*temp)->left==NULL&&(*temp)->right->right==NULL){
			(*temp)->data=(*temp)->right->data;
			(*temp)->right=NULL;
			(*temp)->left=(*temp)->left->left;
		}
		else if((*temp)->right->right!=NULL&&(*temp)->left->left!=NULL){
			(*temp)->data=(*temp)->left->data;
			(*temp)->left=(*temp)->left->left;
			(*temp)->right=(*temp)->left->right;
			//free(temp);
		}
	}

}
void search(struct tree *root,int find)
{         
	//printf("%p %p",root,root->right);
	if(root==NULL)
		printf("NOT FOUND\n");
	else if(root->data==find)
		printf("Found\n");
	else if(root->data<=find){
		printf("%d <->%d\n",root->data,find);
		search(root->right,find);
	}
	else if (root->data>find){
		printf("%d <-> %d\n",root->data,find);
		search(root->left,find);
	}
}
void inorder(struct tree *node)
{      
	if(node->left!=NULL)
		inorder(node->left);
	printf("%d ",node->data);
	if(node->right!=NULL)
		inorder(node->right);
}
int main()
{         
	int choice,data;
	struct tree *node,**temp;
	do{
		printf("\n1.Insert 2.Search 3.Delete 4.Inorder 5.EXIT\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				node=malloc(sizeof(struct tree));	
				printf("Enter Data: ");
				scanf("%d",&node->data);
				node->left=node->right=NULL;
				if(head==NULL){
					head=node;
				}
				else{     
					temp=&head;
					//insert(&(*temp),node);
					free(*temp);
				}
				//printf("%p %p\n",head,head->right);
				break;
			case 2:
				printf("Enter data: ");
				scanf("%d",&data);
				temp=&head;
				//printf("%p",temp);
				search(*temp,data);
				break;
			case 4:
				temp=&head;
				inorder(*temp);
				break;
			default:
				printf("\nYou N008\n");
				break;
		}
	}while(choice!=5);

	return 0;
}
