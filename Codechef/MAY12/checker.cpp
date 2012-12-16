using namespace std;
#include<iostream>
//#define size 3
typedef long long ll;
int main()
{           
	ll size;
	cin>>size;
	ll a1[size],b1[size];
	ll a[size],index1=0,index2=0;
	ll b[size];
	for(ll i=0;i<size;i++)cin>>a1[i]>>b1[i];
	for(ll x=0;x<size;x++){cin>>a[x];/*cout<<a[x]<<endl;*/}
	//cout<<endl;
	for(ll z=0;z<size;z++){cin>>b[z];/*cout<<b[z]<<endl;*/}

	for(ll i=0;i<size;i++){
	if(a[i]!=b[i]){
	cout<<a1[i]<<" "<<b1[i]<<endl;
	cout<<a[i]<<" "<<b[i]<<" "<<i<<endl;
	cout<<endl;
	}
	}
	cout<<"all done";
	return 0;
}
