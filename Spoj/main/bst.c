#include<stdio.h>
#include<stdlib.h>
unsigned long long counter;
struct tree
{
	unsigned long long data;
	struct tree *left,*right;
}*head=NULL;
void insert(struct tree *temp,struct tree *node){
	counter++;
	if(temp->right==NULL&&node->data>temp->data)
		temp->right=node;
	else if(temp->right!=NULL&&node->data>temp->data)
		insert(temp->right,node);
	else if(temp->left==NULL&&node->data<temp->data)
		temp->left=node;
	else if(temp->left!=NULL&&node->data<temp->data)
		insert(temp->left,node);
}
int main()
{         

	struct tree *node,*temp;
	unsigned long long n;
	counter=0;
	scanf("%llu",&n);
	node=malloc(sizeof(struct tree));
        scanf("%llu",&node->data);
	head=node;
        printf("%llu\n",counter);
	n--;
	while(n--){
		node=malloc(sizeof(struct tree));	
		scanf("%llu",&node->data);
		temp=head;
		insert(temp,node);
		printf("%llu\n",counter);
		
	}
	return 0;
}
