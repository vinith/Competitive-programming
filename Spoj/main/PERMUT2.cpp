#include<iostream>
using namespace std;
int main()
{
	unsigned int n;
	unsigned input[100000],check[100000];
	bool flag;
	while(cin>>n&&n!=0){
		for(int i=0;i<n;i++){
			cin>>input[i];
			check[input[i]-1]=i+1;
		}
		flag=0;
		for(int i=0;i<n;i++){
			if(input[i]!=check[i]){
				flag=1;
				break;
			}
			//cout<<input[i]<<" "<<check[i]<<endl;
		}
		if(flag==1){
			cout<<"not ambiguous"<<endl;
		}
		else{
			cout<<"ambiguous"<<endl;
		}
	}
	return 0;
}

