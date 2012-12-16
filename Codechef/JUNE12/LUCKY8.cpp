using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<map>
typedef unsigned long long ull;
ull l,r;
int maxAns;
inline int max(ull a, ull b)
{
	if(a>b)return a;
	return b;
}
void solve(ull num,int n4,int n7,int ans)
{
	ull temp1,temp2;
	//cout<<num<<endl;
	if(num<l){
		num*=10;
		//digits++;
		solve(num+4,n4+1,n7,max(ans,(n4+1)*n7));
		solve(num+7,n4,n7+1,max(ans,(n7+1)*n4));
	}
	else if(num>=l && num<=r){
		num*=10;
		//digits++;
		maxAns=max(maxAns,ans);
		solve(num+4,n4+1,n7,max(ans,(n4+1)*n7));
		solve(num+7,n4,n7+1,max(ans,(n7+1)*n4));
	}

}
int main()
{
	int t;
	ull temp;
	scanf("%d",&t);
	while(t--){
		int digits=0;
		scanf("%llu %llu",&l,&r);
		/*temp=r;
		while(r>0){
		digits++;
		r/=10;
		}*/
		maxAns=0;
		solve(0,0,0,0);
		printf("%d\n",maxAns);
	}
	return 0;
}
