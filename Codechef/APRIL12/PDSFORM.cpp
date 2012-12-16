using namespace std;
#include<iostream>
#include<cstdio>
#include<vector>
#define counts 100000000
typedef int ll;
int isPds(ll num)
{
	ll sum=0,prod=1,temp;
	bool zeroStat=false;
	int pos=0,count=0;
	char snum[15];
	while(num>0){
		temp=num%10;
		count++;
		if(temp==0){
			pos=count;
			zeroStat=true;
		}
		sum+=temp;
		prod*=temp;
		num/=10;
	}
	if(zeroStat)
		return pos-1;
	if(prod%sum)
		return -1;
	return -2;


}
//vector<ll>pds(1000000000);
int main()
{
	ll num=10,count=0,pos,exp,temp;
	while(count<counts){
		//cout<<count<<endl;
		pos=isPds(num);
		if(pos==-2){// pds without zeros
			count+=1;
			num+=1;
		}
		else if(pos==-1){//not pds
			num+=1;
		}
		else{//pds with zeros
			exp=1;
			for(int i=0;i<pos;i++)
				exp*=10;
			//for(ll i=num;i<num+exp;i++){
				//add i to pds vector
			//}
			//if(exp>1000000)
			//cout<<"skipped "<<exp<<" numbers"<<endl;
			num+=exp;
			count+=exp;
		}
	}

	return 0;
}
