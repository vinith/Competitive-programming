#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	unsigned int n,t,s,sq,i;
	scanf("%u",&t);
	for(i=0;i<t;i++){
		scanf("%u",&n);
		s=0;
		sq=sqrt(n);
		for(unsigned int i=2;i<=sq;i++)
			!(n%i)?s+=i+(n/i):1;
		if(sq*sq==n){
		s-=sq;
		}			
		printf("%u\n",s+1);
	}
	return 0;
}
