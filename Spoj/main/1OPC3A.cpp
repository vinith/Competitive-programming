using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
typedef unsigned long long ull;
ull fastex(ull a,ull p)
{
	if(p==0)
		return 1;
	if(p==1)
		return a;
	if(p%2==0)
		return fastex(a*a,p/2);
	else 
		return a*fastex(a*a,(p-1)/2);
}
int main()
{
	int t;
	ull n,f1=1,f2=1,temp,ans;
	scanf("%d",&t);
	while(t--){
		f1=f2=1;
		ans=1;
		scanf("%llu",&n);
		for(int i=1;i<n;i++){
			ans*=fastex(2,f1);
			cout<<f1<<endl;
			temp=f2;
			f2=f1+temp;
			f1=temp;
		}
		cout<<ans<<"   "<<f2<<endl;
	}
	return 0;
}
