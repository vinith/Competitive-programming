#include<iostream>
using namespace std;
int power(int n,unsigned long long p)
{
	if(p==0)
		return 1;
	else if(p==1)
		return n%10;
	else if(p%2!=0)
		return ((n%10)*power((n*n)%10,(p-1)/2))%10;
	else
		return (power((n*n)%10,p/2))%10;
}
int main()
{
	int t,a;
	unsigned long long b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<power(a,b)<<endl;
	}
	return 0;
}
