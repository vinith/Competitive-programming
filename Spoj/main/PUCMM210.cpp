using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#define mod 1000000003
#define lim 1000001
inline long read()
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
unsigned long long pre[lim];
int main()
{
	int t;
	int n;
	unsigned long long temp,a=0;
	for(unsigned long long i=0;i<lim;i++){
		temp=(((i*i)%mod)*i)%mod;
		a=(a+temp);//%mod;
		pre[i]=(pre[i-1]+a)%mod;
	}
	//scanf("%d\n",&t);
	t=read();
	while(t--){
		//scanf("%d",&n);
		n=read();
		printf("%llu\n",pre[n]);
	}
	return 0;
}
