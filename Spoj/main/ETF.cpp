using namespace std;
#include<iostream>
#include<cstdio>
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
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",phi(n));
	}
	return 0;
}
