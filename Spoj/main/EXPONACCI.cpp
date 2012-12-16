using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#define mod 10000007
typedef unsigned long long ull;
ull fastex(ull a,ull p)
{
	if(p==0)
		return 1;
	if(p==1)
		return a;
	if(p%2==0)
		return fastex((a*a)%mod,p/2)%mod;
	else
		return a*(fastex((a*a)%mod,(p-1)/2))%mod;
}
ull exp(ull a,ull f)
{
if(f==0)
return 1;
if(f==1)
return a;
else return (fastex(a,f-1)%mod)*(fastex(a,f-2)%mod);
}
int main()
{
ull t,n;
scanf("%llu",&t);
while(t--){
scanf("%llu",&n);
printf("%llu\n",exp(2,n-1));
}
return 0;
}
