#include<stdio.h>
#define mod 1000000007
typedef unsigned long long ll;
class m
{
	public:
		ll a,b,c,d;
		m()
		{
			a=b=c=1;
			d=0;
		}
		m mul(m a,m b)
		{
			m o;
			o.a=((a.a*b.a)+(a.b*b.c));
			o.b=((a.a*b.b)+(a.b*b.d));
			o.c=((a.c*b.a)+(a.d*b.c));
			o.d=((a.c*b.b)+(a.d*b.d));	
			return o;
		}
		m exp(m o,ll n)
		{       
			if(n==0){
				m temp;
				temp.a=temp.b=temp.c=temp.d=1;
				return temp;
			}
			if(n==1)
				return o;
			if(n%2==0)
				return exp(o.mul(o,o),n/2);
			else
				return o.mul(o,exp(o.mul(o,o),(n-1)/2));
		}
		ll f(ll n)
		{
			m s;
			s=s.exp(s,n);
			return s.a;
		}
		

};
ll ex(ll a,ll n)
{
	if(n==0)
		return 1;
	if(n==1)
		return a;
	if(n%2==0)
		return ex((a*a),n/2);
	else
		return (a*ex((a*a),(n-1)/2));
}
main()
{
	int t;
	ll n,f;
	scanf("%d",&t);
	while(t--){
		m v;
		scanf("%lld",&n);
		if(n==0)printf("1\n");
		else{
			f=v.f(n-1);
			printf("%lld\n",ex(2,f)%mod);

		}
	}
}
