#include<stdio.h>
#include<stdlib.h>
struct tree
{
	unsigned int data;
	struct tree *left,*right;
}*head=NULL;
void insert(struct tree *current, struct tree *parent,struct tree *node)
{
	if(current->data>node->data){
		if(current->left==NULL)
			current->left=node;
		else
			insert(current->left,current,node);
	}
	else if(current->data<node->data){
		if(current->right==NULL)
			current->right=node;
		else
			insert(current->right,current,node);	
	}
	
}
void inorder(struct tree *root)
{
	if(root->left!=NULL)
		inorder(root->left);
			printf("%u ",root->data);
	if(root->right!=NULL)
		inorder(root->right);
}
int main()
{
	int choice;
	struct tree *temp,*node;
	do{
		printf("\n1.Insert 2.Inorder 3.Exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				node=malloc(sizeof(struct tree));
				printf("Enter Data: ");
				scanf("%u",&node->data);
				if(head==NULL)
					head=node;
				else{
					temp=head;
					insert(temp,temp,node);	
				}
				break;
			case 2:
				temp=head;
				inorder(temp);
				break;
			default:
				printf("\nf008\n");
				break;
		}
	}while(choice!=3);
	return 0;
}
