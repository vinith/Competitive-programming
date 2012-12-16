#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
bool isprime[10000000000000001];
int main()
{
	unsigned long long n,t,s,sq,i,k;
	scanf("%llu",&t);
	for(i=0;i<t;i++){
		scanf("%llu",&n);
		s=0;
		sq=sqrt(n);
		for(k=2;k<=sq;k++)
			if(n%k==0)s+=(k+(n/k));
		if(sq*sq==n){
			s-=sq;
		}			
		printf("%llu\n",s+1);
	}
	return 0;
}


