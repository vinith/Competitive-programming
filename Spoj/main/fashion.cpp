#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	unsigned int t,n;
	unsigned long long sum;
	cin>>t;
	while(t--){
		cin>>n;
		sum=0;
		int male[n],female[n];
		for(int i=0;i<n;i++)cin>>male[i];
		for(int i=0;i<n;i++)cin>>female[i];
		sort(male,male+n);sort(female,female+n);
		for(int i=0;i<n;i++){
			sum=sum+(male[i]*female[i]);
		}
		cout<<sum<<endl;
	}
	return 0;
}

