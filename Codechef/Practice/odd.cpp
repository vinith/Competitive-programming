#include<iostream>
using namespace std;
void kaboom(unsigned long int n)
{
	
	unsigned long int rans=1;
	while(rans<=n)
	{
		rans*=2;
		
	}
	cout<<rans/2<<endl;
}
using namespace std;
int main()
{
	long int t;
	unsigned long int n;

	cin>>t;
	while(t--)
	{
		cin>>n;
		kaboom(n);

	}
	return 0;
} 
