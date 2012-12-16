#include<iostream>
using namespace std;
#define max 200;
int* fact(int number)
{        
	int *answer;
	answer= new int(max);
	if(number<=1)
		return 1;
	else
	{
		*answer=number*fact(number-1);
		return *answer;
	}
}
int main()
{
        int n,number;
	cin>>n;
	while(n--)
	{
		cin>>number;
		cout.precision(0);
		cout<<fixed<<fact(number)<<endl;
	}
	return 0;
}
