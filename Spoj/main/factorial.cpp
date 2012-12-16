#include<iostream>
using namespace std;
void find_five(long long x)
{
	long long count=0;
	while(x>=5)
	{      
		count+=x/5;
		x=x/5;
	}
	cout<<count<<"\n";
}
int main()
{
	long long array[100000];
	long long num;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>array[i];
		find_five(array[i]);	

	}
	return 0;
}
