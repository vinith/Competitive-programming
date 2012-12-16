#include<iostream>
#include<math.h>
using namespace std;
unsigned long long fibo[44],m;
void generate_fib()
{       
	fibo[1]=1;
	fibo[2]=2;
	for(int i=3;i<=43;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}
int main()
{
	int t;
	cin>>t;
	generate_fib();
	unsigned long long n,n1,n2,sum,count=0;
	while(t--){
		count=0;sum=0;
		cin>>n>>m;
		m=pow(2,m);
		if(n<44){
			n=fibo[n];
			cout<<n%m<<endl;
		}
		else{
			n1=fibo[42]%m;
			n2=fibo[43]%m;
			n-=43;
			while(n--){
				sum=(n1+n2)%m;
				n1=n2;
				n2=sum;
			}
			cout<<sum<<endl;
			m=0;
		}
	}
	return 0;
}
