using namespace std;
#include<iostream>
#include<cstdio>
int main()
{
	int n,k,a,temp;
	long long sum=0;
	scanf("%d %d",&n,&k);
	temp=n-k;
	for(int i=0;i<temp;i++){
		scanf("%d",&a);
		sum+=(-1*a);
	}
	for(int i=0;i<k;i++){
		scanf("%d",&a);
		sum+=a;
	}
	printf("%lld\n",sum);
}
