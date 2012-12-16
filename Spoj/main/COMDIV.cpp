using namespace std;
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
typedef unsigned long long ull;
ull gcd(ull a,ull b)
{
	ull temp;
	while(b>0){
		temp=a;
		a=b;
		b=temp%b;
	}
	return a;
}
int main()
{
	ull t,a,b,f,count,temp;
	scanf("%llu",&t);
	while(t--){
		count=0;
		scanf("%llu %llu",&a,&b);
		f=gcd(a,b);
		temp=sqrt(f);
		for(ull i=1;i<=temp;i++){
			if(f%i==0)count+=2;
		}
		if(temp*temp==f)count--;
		printf("%llu\n",count);
	}
	return 0;
}
