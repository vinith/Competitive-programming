using namespace std;
#include<iostream>
#include<cstdio>
inline int read()
{
	char temp;
	int x=0;
	temp=getchar_unlocked();
	while(temp<48)temp=getchar_unlocked();
	x+=(temp-'0');
	temp=getchar_unlocked();
	while(temp>=48){
		x=x*10;
		x+=(temp-'0');
		temp=getchar_unlocked();
	}
	return x; 
}
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
	t=read();
	while(t--){
		n=read();
		printf("%d\n",phi(n));
	}
	return 0;
}
