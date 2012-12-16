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
	else{  //if current data= node data
		//free(node);
		if(current->left==NULL&&current->right==NULL){ //leaf node
			if(current->data>parent->data)
				parent->right=NULL;
			else
				parent->left=NULL;
			//free(current);
		}
		else if(current->left==NULL){ 
			if(current->data>parent->data) // current is rsubtree and has left null
				parent->right=current->right;
			else	//current is lsubstree and has left null
				parent->left=current->right;
			//free(current);
		}
		else if(current->right==NULL){
			if(current->data>parent->data)// current is rsubtree and has right NULL
				parent->right=current->left;
			else		//current is lsubstree and has right null
				parent->left=current->left;
			//free(current);
		}
		else{ //both left and right not null
			node=current->right;
			if(node->left==NULL){
				current->data=node->data;
				current->right=node->right;
				//free(node);
			}
			else{
				while((node->left)->left!=NULL)
					node=node->left;
				current->data=(node->left)->data;
				//free(node->left);
				node->left=NULL;					
			}
		}


	}

}
int main()
{
	unsigned int n;
	struct tree *node;
	scanf("%u",&n);
	node=malloc(sizeof(struct tree));
	head=malloc(sizeof(struct tree));
	node->left=node->right=NULL;
	scanf("%u",&node->data);
	head->data=99999999;
	head->left=node;
	n--;
	while(n--){
		node=malloc(sizeof(struct tree));
		node->left=node->right=NULL;
		scanf("%u",&node->data);
		//temp=head->left;
		insert(head->left,head,node);	
	}
	printf("%u",(head->left)->data);
	return 0;
}
