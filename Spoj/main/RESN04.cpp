#include<iostream>
#include<stdio.h>
int main()
{
	int t,n,s,temp;
	scanf("%d",&t);
	while(t--){
		s=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&temp);
			s+=i/temp;
		}
		if(!s%2)
			printf("BOB\n");
		else
			printf("ALICE\n");
	}
	return 0;
}
