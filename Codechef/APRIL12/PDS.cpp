using namespace std;
#include<iostream>
#include<cstdio>
#include<vector>
#define counts 10000000
typedef int ll;
bool isPds(ll num)
{
	ll sum=0,prod=1,temp;
	while(num>0){
		temp=num%10;
		if(temp==0){
			return false;
		}
		sum+=temp;
		prod*=temp;
		num/=10;
	}
	if(prod%sum)
		return false;
	return true;


}
//vector<ll>pds(1000000000);
int main()
{
	ll num=1,count=0,pos,exp,temp;
	while(count<counts){
		if(isPds(num)){
			count++;
		}
		num++;
	}
	cout<<count;

	return 0;
}
