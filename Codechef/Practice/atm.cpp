#include<iostream>
using namespace std;
int main()
{
	unsigned int withdraw;
	float balance;
	float charge=0.50;
	cin>>withdraw>>balance;

	if(withdraw<0||balance>2000||withdraw+0.50>balance||withdraw%5!=0)
		cout<<balance<<"\n";
	else
	{         
		cout.precision(2);
		cout<<fixed<<(balance-withdraw)-charge<<"\n";
		
	}
	return 0;
}
