#include<iostream>
using namespace std;
int main()
{
	float table[350];
	table[0]=0.5;
	for(int i=1;i<350;i++){
		table[i]=table[i-1]+1.0/(i+2);
		//cout<<table[i-1]+1.0i+2;
		//break;
	}
	//cout<<table[349];
	float n;
	while(cin>>n && n!=0.00){
		for(int i=0;i<350;i++){
			if(table[i]==n){
				cout<<i+1<<" card(s)"<<endl;
				break;
			}
			else if(table[i]>n){
				cout<<i+1<<" card(s)"<<endl; 	
				break;
			}
		}
	}
	return 0;
}
