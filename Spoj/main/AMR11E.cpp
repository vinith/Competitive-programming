using namespace std;
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<iostream>
#define size 3000
bool primes[size];
const int sq=sqrt(size)+1;
bool isLucky(int num){
	int pcount=0;
	if(!primes[num])return false;
	for(int i=2;pcount<3&&i<num;i++){
		if(!primes[i]&&num%i==0)pcount++;
		}
	if(pcount<3)return false;
	return true;
}
int main()
{       int t,n,count,k;
	primes[0]=primes[1]=true;
	for(int i=2;i<=sq;i++){
		if(!primes[i]){
			for(int k=i*2;k<=size;k+=i)primes[k]=true;
		}
	}
	scanf("%d",&t);
	while(t--){
		count=0;
		scanf("%d",&n);
		for(k=0;count<n;k++){
			if(isLucky(k))count++;				
		}
		printf("%d\n",k-1);
	}
	return 0;
}
