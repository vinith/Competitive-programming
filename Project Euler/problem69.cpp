using namespace std;
#include<iostream>
#include<cstdio>
#define limit 1000000
int phi(int n)
{
	int answer=n;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) answer-=answer/i;
		while(n%i==0) n/=i;
	}
	if(n>1) answer-=answer/n;
	return answer;
}
int main()
{
	double max=2,temp;
	int num;
	for(int i=2;i<=limit;i++){
		temp=(i*1.0)/phi(i);
		if(temp>max){
			max=temp;
			num=i;
		}	
	}
	cout<<num<<endl;
	return 0;
}
