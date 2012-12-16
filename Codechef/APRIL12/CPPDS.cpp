using namespace std;
#include<iostream>
#include<cstdio>
#define counts 1000000000
typedef int ll;
int isPds(ll num)
{
	ll sum=0,prod=1,temp;
	bool zeroStat=false;
	int pos=0,count=0;
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
//int pds[100000000];
int main()
{       int n;
	while(scanf("%d",&n)&&n!=0){
		ll num=1,count=0,pos,exp,temp;
		while(count<counts){
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
				temp=num;
				for(ll i=temp;i<temp+exp;i++){
					count++;
					num++;
					if(count==n)
					break;
				}
				
				
			}
			if(count==n){
			printf("%d\n",num-1);
			break;
			}
		}
	}

	return 0;
}
