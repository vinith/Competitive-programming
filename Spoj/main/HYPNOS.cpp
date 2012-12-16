#include<iostream>
#include<stdio.h>
using namespace std;
bool map[100000000]={0};
unsigned long int count=0;
bool digsum(unsigned long long number)
{

	unsigned long long sum=0,temp;
	//static unsigned long int count=0;
	while(number>9){
		temp=number%10;
		sum+=(temp*temp);
		number/=10;
	}
	sum+=(number*number);
	count++;
	if(sum==1)
		return 1;
	if(map[sum]==1)
		return 0;
	else{
		map[sum]=1;
		digsum(sum);
	}

}
int main()
{
	unsigned long long n;
	scanf("%lld",&n);
	//for(int i=0;i<10;i++)cout<<map[i];
	if(digsum(n))
		cout<<count;
	else
		cout<<"-1";
	return 0;
}
