using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<map>
typedef long long ll;
int main()
{
	int t;
	ll n,m,count,i;
	scanf("%d",&t);
	while(t--){
		map<ll,bool> div;
		count=0;
		scanf("%lld %lld",&n,&m);
		for(i=m;i<(2*n);i+=m)div[i]=true;
		map<ll,bool>::iterator End;
		End=div.end();
		for(ll b=1;b<=n;b++){
			for(ll a=1;a<b;a++){
				if(div.find(a+b)!=End)
					count++;
			}
		}
		printf("%lld\n",count);
	}

	return 0;
}
