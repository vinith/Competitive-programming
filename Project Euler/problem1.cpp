#include<iostream>
using namespace std;
int main()
{
	unsigned long long sum=0;
	for(int i=3;i<=999;i++){
		if(i%3==0)
			sum+=i;
		else if(i%5==0)
			sum+=i;
	}
	cout<<sum<<endl;
	return 0;
}
