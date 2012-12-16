using namespace std;
#include<iostream>
#include<cstdio>

int main()
{
	int t,n,m,c;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		int p[n][m];
		for(int i=0;i<m;i++)scanf("%d",&c);
		for(int i=0;i<n;i++)for(int k=0;k<m;k++)scanf("%d",&p[i][k]);
		printf("%d\n",m-3);
		for(int i=3;i<m;i++)printf("%d ",i);
		printf("\n");
	}
	return 0;
}
