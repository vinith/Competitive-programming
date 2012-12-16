using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>

int main()
{
	int t,needs,friends,has,count,k;
	scanf("%d",&t);
	for(int Case=1;Case<=t;Case++){
		has=0;
		scanf("%d %d",&needs,&friends);
		int stamp[friends];
		for(int i=0;i<friends;i++)scanf("%d",&stamp[i]);
		sort(stamp,stamp+friends);
		for(k=friends-1;has<needs&&k>-1;k--){
			has+=stamp[k];
		}
		printf("Scenario #%d:\n",Case);
		if(has<needs)printf("impossible\n");
		else printf("%d\n",friends-k-1);
	}
	return 0;
}
