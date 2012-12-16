#include<iostream>
#include<stdio.h>
using namespace std;
int four[100001]={0},seven[100001]={0};
void calc()
{
	int x,t;
	four[4]=1;
	seven[7]=1;
	for(int i=13;i<=100000;i++){
		t=i;
		while(t!=0){
			x=t%10;
			if(x==4)
				four[i]++;
			else if(x==7)
				seven[i]++;
			t/=10;
		 //cout<<i<<endl;
		}
	}
}
bool check(int a,int b)
{
	unsigned long long f=0,s=0;
	for(int i=a;i<=b;i++){
		f+=four[i];
		s+=seven[i];
	}
	if(s==f)
		return true;
	else
		return false;
}
int main()
{
	int t,n;
	unsigned long long count;
	calc();
	scanf("%d",&t);
	//printf("%d %d %d",four[100000],four[10004],seven[7777]);
	while(t--){
		cin>>n;
		count=0;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(check(i,j))
					count++;
			}
		}
		printf("%llu\n",count);
	}
	return 0;
}
