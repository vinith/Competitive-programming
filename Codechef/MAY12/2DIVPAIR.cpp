using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
typedef long long ll;
int main()
{
	int t;
	ll n,m,count,i;
	scanf("%d",&t);
	while(t--){
		count=0;
		scanf("%lld %lld",&n,&m);
		for(int i=2,k=3;i<=n;i++,k+=2)count+=((k/m)-(i/m));
		printf("%lld\n",count);
	}

	return 0;
}
