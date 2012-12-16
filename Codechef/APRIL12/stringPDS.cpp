using namespace std;
#include<iostream>
#include<cstdio>
#include<vector>
#include<cstdlib>
#include<string.h>
#define counts 1000000
typedef int ll;
bool isPds(ll num)
{
	ll sum=0,prod=1,temp,l;
	char snum[15];
	sprintf(snum,"%d",num);
	l=strlen(snum);
	for(int i=0;i<l;i++){
		temp=snum[i]-48;
		if(temp==0)
			return false;
		sum+=temp;
		prod*=temp;
	}
	if (prod%sum)
		return false;
	return true;


}
//vector<ll>pds(1000000000);
int main()
{
	ll num=10,count=0,pos,exp,temp;
	while(count<counts){
		if(isPds(num)){
			count++;
		}
		num++;
	}

	return 0;
}
