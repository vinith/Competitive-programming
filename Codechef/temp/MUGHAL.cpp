#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	unsigned int t,n;
	scanf("%u",&t);
		while(t--){
			scanf("%u",&n);
			if(n%4==1||n==2)
				printf("YES\n");
			else 
				printf("NO\n");
		}
	return 0;
}
