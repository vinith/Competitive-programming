#include<iostream>
using namespace std;
int main()
{
	unsigned int n,x,y;
	cin>>n;
	while(n--){
		cin>>x>>y;
		if(x==0&&y==0){
			cout<<0<<endl;
			continue;
		}
		else if(x==0&&y!=0){
			cout<<"No Number"<<endl;
			continue;
		}
		if(x==1&&y==1){
			cout<<1<<endl;
			continue;
		}
		else if(x==1&&y!=1){
			cout<<"No Number"<<endl;
			continue;
		}
		if(x%2==0){
			if(y==x-2||y==x){
				cout<<x+y<<endl;
				continue;
			}
			else{
				cout<<"No Number"<<endl;
				continue;
			}
		}
		else{
			if(y==x-2||y==x){
				cout<<x+(y-1)<<endl;
				continue;
			}
			else{
				cout<<"No Number"<<endl;
				continue;
			}
		}
	}
	return 0;
}
