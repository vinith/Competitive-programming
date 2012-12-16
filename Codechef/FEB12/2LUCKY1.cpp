#include<iostream>
#include<stdio.h>
using namespace std;
int four[100001]={0},seven[100001]={0};
unsigned long long answer[100001];
bool check(int,int);
void calc()
{
	int x,t;
	for(int i=1;i<=100001;i++){
		t=i;
		four[i]+=four[i-1];
		seven[i]+=seven[i-1];
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
void calc1()
{       
	unsigned long long count=0;
	for(int i=1;i<=40000;i++){
		count=answer[i-1];
		for(int j=1;j<=i;j++){
			if(check(j,i))
			count++;
		}
		answer[i]=count;
	}
}
bool check(int a,int b)
{
	if((four[b]-four[a-1])==(seven[b]-seven[a-1]))
		return true;
	else
		return false;	

}
int main()
{
	int t,n;
	unsigned long long count;
	scanf("%d",&t);
	answer[0]=0;
	calc();
	calc1();
	//scanf("%d",&t);
	//printf("%llu\n",answer[3]);
	while(t--){
		scanf("%d",&n);
		count=answer[n];
		if(n<40001){
	
		}
		else{
			for(int i=40000;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(check(j,i))
						count++;
				}
			}
		}
		printf("%llu\n",count);
		
	}
	return 0;
}
