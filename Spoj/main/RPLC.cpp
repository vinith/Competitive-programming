/*
1
5
1 -8 2 3 -1
*/
using namespace std;
#include<iostream>
#include<cstdio>
int main()
{
	int t,n;
	int pos;
	scanf("%d",&t);
	for(int x=1;x<=t;x++){
		long long life=1,needed=1;
		int ni;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&ni);
			life+=ni;
			if(life<1){
			needed+=(life*-1)+1;
			life=1;
			}
		}
		printf("Scenario #%d: %lld\n",x,needed);
	}
	return 0;
}
