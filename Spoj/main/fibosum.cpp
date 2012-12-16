#include<iostream>
using namespace std;
unsigned long long m=1000000007;
class mat
{
	public:
		unsigned long long a,b,c,d;
		mat()
		{
			a=1;
			b=1;
			c=1;
			d=0;
		}
		mat(unsigned long long i,unsigned long long j,unsigned long long k,unsigned long long l):a(i),b(j),c(k),d(l)
	{ }
		mat operator * (mat) const;
};
mat mat::operator * (mat m1) const
{
	unsigned int a1,b1,c1,d1;
	a1=(a*m1.a+b*m1.c)%m;
	b1=(a*m1.b+b*m1.d)%m;
	c1=(c*m1.a+d*m1.c)%m;
	d1=(c*m1.b+d*m1.d)%m;
	//cout<<a1<<" "<<b1<<" "<<c1<<" "<<d1<<endl;
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
	mat m1,n1,temp;
	int t;
	cin>>t;
	unsigned long long n,mm,two,one,fib,ans;
	while(t--){
		cin>>n>>mm;
		m1=power(m1,mm+2);
		one=(m1.b-1);//%m;
		//cout<<one<<endl;
		m1=power(n1,n+1);
		two=(m1.b-1);//%m;
		//cout<<two<<endl;
		if(one<two){
		one=one+m;
		}
		cout<<one-two<<endl;
		m1.a=n1.a=m1.b=n1.b=m1.c=n1.c=1;
		m1.d=n1.d=0;		
	}
	return 0;
}

