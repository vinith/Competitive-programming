using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#define mod 1000000007
class matrix
{
	public:
		unsigned long long a,b,c,d;
		matrix()
		{
			a=b=c=1;
			d=0;
		}
		matrix square(matrix o)
		{
			unsigned long long w=o.a,x=o.b,y=o.c,z=o.d;
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
		matrix exp(matrix o,unsigned long long n)
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
		unsigned long long f(unsigned long long n)
		{
			matrix s;
			s=s.exp(s,n);
			return s.d;
		}
		unsigned long long g(unsigned long long n)
		{         
			//static int count=0;
			//cout<<n<<endl;
			if(n==0)
				return 0;
			else 
				return (g(n-1)%mod+f(((4*n)-1)%mod)%mod);
		}

};
int main()
{
	int t;
	unsigned long long n;
	scanf("%d",&t);
	while(t--){
		matrix v;
		scanf("%lld",&n);
		printf("%lld\n",v.g(n));
	}
	return 0;
}
