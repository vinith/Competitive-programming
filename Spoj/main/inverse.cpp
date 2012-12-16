#include<iostream>
using namespace std;
int main()
{
	unsigned long long t;
	unsigned long long n,counter;
	cin>>t;
	while(t--){
		cin>>n;
		counter=0;
		unsigned long long num[n];
		for(int j=0;j<n;j++){
			cin>>num[j];
			for(int i=0;i<j;i++){
				if(num[j]<num[j-1])counter+=j;
				else if(num[j]<num[i]){
				counter++;
				}
			}
		}cout<<counter<<endl;
	}
	return 0;
}
