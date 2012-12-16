#include<stdio.h>
#define mod 1000000007
typedef unsigned long long ll;
class matrix
{
	public:
		ll a,b,c,d;
		matrix()
		{
			a=b=c=1;
			d=0;
		}
		matrix square(matrix o)
		{
			ll w=o.a,x=o.b,y=o.c,z=o.d;
			o.a=((a*a)%mod+(b*c)%mod)%mod;
			o.b=((a*b)%mod+(b*d)%mod)%mod;
			o.c=((c*a)%mod+(d*c)%mod)%mod;
			o.d=((c*b)%mod+(d*d)%mod)%mod;
			return o;
		}
		matrix mul(matrix a,matrix b)
		{
			matrix o;
			o.a=((a.a*b.a)%mod+(a.b*b.c)%mod)%mod;
			o.b=((a.a*b.b)%mod+(a.b*b.d)%mod)%mod;
			o.c=((a.c*b.a)%mod+(a.d*b.c)%mod)%mod;
			o.d=((a.c*b.b)%mod+(a.d*b.d)%mod)%mod;	
			return o;
		}
		matrix exp(matrix o,ll n)
		{       
			if(n==0){
				matrix temp;
				temp.a=temp.b=temp.c=temp.d=1;
				return temp;
			}
			if(n==1)
				return o;
			if(n%2==0)
				return exp(o.square(o),n/2);
			else
				return o.mul(o,exp(o.square(o),(n-1)/2));
		}
		ll f(ll n)
		{
			matrix s;
			s=s.exp(s,n-1);
			return s.a;
		}
		

};
ll fastex(ll a,ll n)
{
	if(n==0)
		return 1;
	if(n==1)
		return a;
	if(n%2==0)
		return fastex(a*a,n/2)%mod;
	else
		return (a*fastex(a*a,(n-1)/2))%mod;
}
int main()
{
	int t;
	ll n,g;
	scanf("%d",&t);
	while(t--){
		matrix v;
		scanf("%lld",&n);
		if(n==1)printf("1\n");
		else{
			g=v.f(n);
			printf("%lld\n",fastex(2,g));

		}
	}
	return 0;
}
