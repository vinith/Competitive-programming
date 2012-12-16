#include<iostream>
using namespace std;
int main()
{
	unsigned long long pi,wi;
	while((cin>>pi>>wi)&&(pi!=-1||wi!=-1)){
		if(pi==0||wi==0)
			cout<<"N"<<endl;
		else if((pi%1000==0)&&(wi%37==0)){
			if(pi/1000==wi/37)
				cout<<"Y"<<endl;
			else
				cout<<"N"<<endl;
		}
		else
			cout<<"N"<<endl;

	}
	return 0;
}
