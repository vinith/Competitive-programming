using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>

int main()
{
	int t;
	long n,sq,div,i;
	scanf("%d",&t);
	while(t--){
		scanf("%ld",&n);
		sq=(sqrt(n));
		for(i=sq;n%i!=0;i--){}
		printf("%ld\n",(n/i)-i);
	}
	return 0;
}
