#include<stdio.h>
int main()
{
	int number,div;
	 int t,counter=0;
	scanf("%d%d",&number,&div);
	for(int i=0;i<number;i++)
	{
		scanf("%d",&t);
	 ((t%div)==0)?counter++:counter;
                 
	}
	printf("%d\n",counter);
	return 0;
}

