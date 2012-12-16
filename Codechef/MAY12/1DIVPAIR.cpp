using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<map>
typedef long long ll;
ll divpair(ll n,ll m)
{          
	if(n==0) return 0;
	//return divpair(n-1,m)+((n-1)/(m-(n%m)));
	
}
int main()
{
	int t;
	ll n,m,count,i;
	scanf("%d",&t);
	while(t--){
		count=0;
		scanf("%lld %lld",&n,&m);
		printf("%lld\n",divpair(n,m));
	}

	return 0;
}
