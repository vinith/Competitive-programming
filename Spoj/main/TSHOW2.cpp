using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
class matrix
{
	public:
		int a,b,c,d;
		matrix()
		{
			a=b=c=1;
			d=0;
		}
		matrix square(matrix o)
		{
			int w=o.a,x=o.b,y=o.c,z=o.d;
			o.a=((a*a)+(b*c))%10;
			o.b=((a*b)+(b*d))%10;
			o.c=((c*a)+(d*c))%10;
			o.d=((c*b)+(d*d))%10;
			return o;
		}
		matrix mul(matrix a,matrix b)
		{
			matrix o;
			o.a=((a.a*b.a)+(a.b*b.c))%10;
			o.b=((a.a*b.b)+(a.b*b.d))%10;
			o.c=((a.c*b.a)+(a.d*b.c))%10;
			o.d=((a.c*b.b)+(a.d*b.d))%10;	
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
		int f(unsigned long long n)
		{
			matrix s;
			s=s.exp(s,n);
			return s.d;
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
		printf("%d\n",v.f(n));
	}
	return 0;
}
