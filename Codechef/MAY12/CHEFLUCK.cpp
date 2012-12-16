using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
//typedef long long ll;
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		while(n%7){
			n-=4;
		}
		if(n<0)
			printf("-1\n");
		else
			printf("%d\n",n);

	}
	return 0;
}
