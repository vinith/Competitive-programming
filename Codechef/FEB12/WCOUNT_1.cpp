#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
long int fact_ten[11]={0};
#define mod 1000000007
unsigned long long fact[500]={0};
long int initial(int n)
{
	long int x;
	if(fact_ten[4]!=0)
		return fact_ten[4];
	else if(n==0)
		return 1;
	else{
		x=initial(n-1)*n;
		fact_ten[n]=x;
	}
}
unsigned long long factorial(unsigned long long n)
{
	unsigned long long x;
	if(fact[n]!=0)
		return fact[n];
	else if(n==0)
		return 1;
	else{
		x=(factorial(n-1)*n)%mod;
		fact[n]=x;
		return x;
	}
}
int main()
{          
	fact_ten[1]=1; fact_ten[2]=2; fact_ten[3]=6;
	fact_ten[0]=1;
	initial(10);
	int t;
	scanf("%d",&t);
	while(t--){
		char st[505];
		int l;
		int temp;
		int counts[124]={0};
		unsigned long long f;
		float test;
		scanf("%s",st);
		l=strlen(st);
		f=factorial(l);
		test=f;
		for(int i=0;i<l;i++){
			temp=st[i];
			counts[temp]++;
		}
		for(int i=65;i<=90;i++){
			f=f/fact_ten[counts[i]];
			f=f/fact_ten[counts[i+32]];
			//printf("%d %d\n",counts[i],counts[i+32]);
		}
		printf("%llu\n",f);
		
	}
	return 0;
}
