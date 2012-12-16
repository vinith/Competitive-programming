#include<iostream>
using namespace std;
int main()
{
	int numbers[10],sum=0,previous;
	for(int i=0;i<10;i++){
		cin>>numbers[i];
		sum+=numbers[i];
		if(sum==100){
			cout<<"100"<<endl;
			break;
		}
		else if(sum>100){
			previous=sum-numbers[i];
			if(sum-100==100-previous){
				cout<<sum<<endl;
				break;
			}
			else if(sum-100>100-previous){
				cout<<previous<<endl;
				break;
			}
			else {
				cout<<sum<<endl;
				break;
			}
		}	
		else if(i==9){
		cout<<sum<<endl;
		break;
		}
	}
	return 0;
}
