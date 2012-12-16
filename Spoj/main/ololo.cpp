#include<iostream>
#include<algorithm>
using namespace std;
int  main()
{
	unsigned long int n;
	cin>>n;
	unsigned long long p[n];
	for(int i=0;i<n;i++){
		cin>>p[i];	
	}
	sort(p,p+sizeof(p)/sizeof(p[0]));
	for(int i=0;i<n;i+=2){
		if(p[i]!=p[i+1]){
			cout<<p[i]<<endl;
			break;
		}
	}

	return 0;
}
