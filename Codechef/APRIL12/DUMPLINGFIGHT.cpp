using namespace std;
#include<cstdio>
#include<iostream>
typedef  unsigned long long ull;
ull gcd(ull a,ull b)
{	ull temp;
	while(b>0){
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;

}
int main()
{       
	int t;
	scanf("%d",&t);
	ull a,b,c,d,k,hcf,gcd1,gcd2,positions;
	while(t--){
		scanf("%llu %llu %llu %llu %llu",&a,&b,&c,&d,&k);
		gcd1=gcd(a,b); gcd2=gcd(c,d);	
		hcf=(gcd1*gcd2)/gcd(gcd1,gcd2);
		positions=k/hcf;
		printf("%llu\n",(positions*2)+1); //*2 for both sides and +1 for 0,0
	}

	return 0;
}
