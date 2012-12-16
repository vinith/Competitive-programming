using namespace std;
#include<iostream>
#include<cstdio>
typedef unsigned long long ull;
class matrix
{
	public:
		ull a,b,c,d;
		matrix()
		{
			a=b=c=1;
			d=0;
		}
		matrix mul(matrix a,matrix b)
		{
			matrix ret;
			ret.a=(a.a*b.a)+(a.b*b.c);
			ret.b=(a.a*b.b)+(a.b*b.d);
			ret.c=(a.c*b.a)+(a.d*b.c);
			ret.d=(a.c*b.b)+(a.d*b.d);
			return ret;
		}
		matrix exp(matrix a,ull p)
		{
			if(p==0){
				matrix temp;
				temp.a=temp.b=temp.c=temp.d=1;
				return temp;
			}
			if(p==1)
				return a;
			if(p%2==0)
				return exp(mul(a,a),p/2);
			else
				return mul(a,exp(mul(a,a),(p-1)/2));
		}
		ull fib(ull n)
		{
			matrix s;
			s=exp(s,n);
			return s.d;
		}
};
int main()
{
	int t;
	ull n;//nth term
	scanf("%d",&t);
	while(t--){
		matrix v;
		scanf("%llu",&n);
		printf("fib(%llu):%llu\n",n,v.fib(n));
	}
	return 0;
}
