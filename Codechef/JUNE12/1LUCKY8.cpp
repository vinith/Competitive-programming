using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
typedef unsigned long long ull;
ull l,r;
char num1[20],num2[20];
int maxAns,digits;
bool lfree;
inline int max(ull a, ull b)
{
	if(a>b)return a;
	return b;
}
void solve(ull num,int n4,int n7,int ans,int digit)
{
	ull temp1,temp2;
	char ctemp;
	if(lfree==false&&num<r){
		ctemp=num1[digit];
		if(ctemp==num2[digit]){// no choice but to use it
			num*=10;
			maxAns=max(maxAns,ans);
			if(ctemp=='4')n4+=1;
			else if(Ctemp=='7')n7+=1;
			solve(num+ctemp-'0',n4,n7,max(ans,n4*n7),digit+1);
		}
		else if(ctemp=='4'){
		num*=10;
                solve(num+4,n4+1,n7,max(ans,(n4+1)*n7),digit+1);
		}
		else if(ctemp=='7'){
		solve(num+7,n4,n7+1,max(ans,(n7+1)*n4),digit+1);
		}
		else if(ctemp<'4'&&num2[digits]>='4'){
		
		
		}
	}
	if(num<l){
		num*=10;
		solve(num+4,n4+1,n7,max(ans,(n4+1)*n7),digit+1);
		solve(num+7,n4,n7+1,max(ans,(n7+1)*n4),digit+1);
	}
	else if(num>=l && num<=r){
		num*=10;
		maxAns=max(maxAns,ans);
		solve(num+4,n4+1,n7,max(ans,(n4+1)*n7),digit+1);
		solve(num+7,n4,n7+1,max(ans,(n7+1)*n4),digit+1);
	}

}
int main()
{
	int t;
	int l1,l2;
	ull temp;
	scanf("%d",&t);
	while(t--){
		lfree=false;
		int digits=0;
		scanf("%s %s",num1,num2);
		l1=strlen(num1);
		l2=strlen(num2);
		if(l1+1<l2){
			//easy
		}
		else{
			digits=max(l1,l2);
			sscanf(num1,"%llu",&l);
			sscanf(num2,"%llu",&r);
			maxAns=0;
			solve(0,0,0,0,0);
			printf("%d\n",maxAns);
		}
	}
	return 0;
}
