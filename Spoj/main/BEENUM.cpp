#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long double num;
	long double a,b;
	while(cin>>num && num!=-1){
		num=(num-1)/3;	
		a=(-1+sqrt(1+(4*num)))/2;
		b=(-1-sqrt(1+(4*num)))/2;
		if (static_cast<int>(a)==a||static_cast<int>(b)==b){
			cout<<"Y"<<endl;
		}
		else cout<<"N"<<endl;
	}
	return 0;
}
