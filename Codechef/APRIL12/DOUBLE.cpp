using namespace std;
#include<iostream>
#include<cstdio>

int main()
{
	int t;
	unsigned long long n;
	scanf("%d",&t);
	while(t--){
		scanf("%llu",&n);
		if(n%2==0)
			printf("%llu\n",n);
		else
			printf("%llu\n",n-1);
	}
	return 0;
}
