using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>

int main()
{
	int t,n;
	long c,sum,a;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d %ld",&n,&c);
		while(n--){
			scanf("%ld",&a);
			sum+=a;
		}
		if(sum>c)printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}
