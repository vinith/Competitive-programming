using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
unsigned long long answers[1000001];
int lcm(int a,int b)
{
	int temp=a*b,temp1;
	while(b>0){
		temp1=a;
		a=b;
		b=temp1%b;
	}
	return (temp)/a;
}
void precompute()
{
	unsigned long long ans;
	for(int j=1;j<=1000000;j++){
		ans=0;
		for(int i=1;i<=j;ans+=lcm(i,j),i++);
		answers[j]=ans;
	}
}
int main()
{
	int t,n;
	unsigned long long ans;
	scanf("%d",&t);
	precompute();
	while(t--){
		scanf("%d",&n);
		printf("%llu\n",answers[n]);
	}
	return 0;
}
