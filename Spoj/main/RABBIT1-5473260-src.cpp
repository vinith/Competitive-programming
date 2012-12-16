#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
unsigned long long m;
class mat
{
	public:
		unsigned long long a,b,c,d;
		mat(){
			a=b=c=1;
			d=0;
		}
		mat(unsigned long long i,unsigned long long j,unsigned long long k,unsigned long long l):a(i),b(j),c(k),d(l){ }
		mat operator * (mat) const;
};
mat mat::operator * (mat m1) const
{
	unsigned int a1,b1,c1,d1;
	a1=(a*m1.a+b*m1.c)%m;
	b1=(a*m1.b+b*m1.d)%m;
	c1=(c*m1.a+d*m1.c)%m;
	d1=(c*m1.b+d*m1.d)%m;
	return mat(a1,b1,c1,d1);
}
mat power(mat mi,unsigned long long p)
{
	if(p==0){
		mi.a=1;
		mi.b=0;
		mi.c=0;
		mi.d=1;
		return mi;
	}
	else if(p==1){
		return mi;
	}
	else if(p%2!=0){
		return mi*power(mi*mi,(p-1)/2);
	}
	else
		return power(mi*mi,p/2);

}
int main()
{
	mat m1;
	int t;
	scanf("%d",&t);
	unsigned long long n;
	while(t--){
		scanf("%llu %llu",&n,&m);
		m=pow(2,m);
		m1=power(m1,n);
		printf("%llu\n",m1.a);
		m=0;
		m1.a=m1.b=m1.c=1;
		m1.d=0;
	}	
	return 0;
}
