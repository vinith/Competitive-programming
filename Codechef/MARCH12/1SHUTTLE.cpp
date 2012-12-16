#include<iostream>
#include<stdio.h>
using namespace std;
int gcd(int a,int b)
{		
	int temp;
	while(b>0){
		temp=a;
		a=b;
		b=temp%b;
	}
	return a;
}
int main()
{
	int n,t,s,sq,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		s=0;
		for(unsigned int i=2;i<n;i++){
			if(gcd(i,n)==1)
				s++;
		}
		printf("%d\n",s+1);
	}
	return 0;
}

