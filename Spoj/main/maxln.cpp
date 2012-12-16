#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	float r;
	unsigned long long count=0;
	while(t--){
		count++;
		cin>>r;
		cout<<fixed<<setprecision(2)<<"Case "<<count<<": "<<0.25+(r*r*4)<<endl;
	}
	return 0;
}
