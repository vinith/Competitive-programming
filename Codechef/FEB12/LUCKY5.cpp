#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		char s[1000000];
		unsigned int other=0,n;
		scanf("%s",s);
		n=strlen(s);
		for(int i=0;i<n;i++){
			if(s[i]!='4'&&s[i]!='7')
				other++;
		}
		printf("%d\n",other);		
	}
	return 0;
}
