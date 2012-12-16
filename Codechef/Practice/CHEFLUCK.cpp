using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
typedef unsigned long long ull;
int main()
{
	int t;
	ull seven,four,n,temp;
	scanf("%d",&t);
	while(t--){
		scanf("%llu",&n);
		temp=n/11;
		if(n%7==0){
			printf("%llu\n",n);
		}
		else if(n%11==0)
			printf("%llu\n",n/11);
		else if(n-(n%7)==7)
			printf("%llu\n",temp+1)

	}
	return 0;
}
