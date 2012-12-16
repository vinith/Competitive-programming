using namespace std;
#include<iostream>
#include<cstdio>
#define mod 1000000007
#define limit 12
int memo[1001]={0};
int solve(int greatest,int n)
{
	if(n>limit)
		return 0;
	memo[n]=(memo[n]+1)%mod;
	for(int i=1;i<=greatest;i++){
		solve(greatest,n+1);
	}
	solve(greatest+1,n+1);
}
int main()
{
	solve(1,1);
	for(int i=1;i<=limit;i++)
		cout<<i<<" "<<memo[i]<<endl;
	return 0;
}
