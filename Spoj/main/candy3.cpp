#include<iostream>
using namespace std;
int main()
{
	long long t,n,num;
	long long sum=0;
	cin>>t;
	while(t--){
		cout<<endl;
		cin>>n;
		sum=0;
		for(int i=0;i<n;i++){
			cin>>num;
			if(num>=n)num=num%n;
			sum=sum+num;
			if(sum>=n)sum=sum%n;
		}

		if(sum==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
