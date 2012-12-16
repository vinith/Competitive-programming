using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#define min(a,b) ((a<b)?a:b)
#define abs(a)   ((a<0)?(a*-1):a)
int bitmap[183][183];
int n,m;
int si,sj;
int find(int i,int j)
{
	int a,b,c,d;
	//cout<<i<<" "<<j<<endl;
	if(i<0||j<0||i>=n||j>=m)
		return 3000;
	if(bitmap[i][j]==1)
		return abs((si-i))+abs((sj-j));
	else{
		a=find(i,j-1);
		b=find(i-1,j);
		c=find(i,j+1);
		d=find(i+1,j);
		a=min(a,b);b=min(c,d);
		return min(a,b);
	}
}
int main()
{
	int t,ans;
	scanf("%d",&t);
	//cout<<abs((2-20));
	while(t--){
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++)for(int j=0;j<m;j++)scanf("%d",&bitmap[i][j]);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				si=i;sj=j;
				ans=find(i,j);
				printf("%d ",ans);
			}
			printf("\n");
		}

	}
	return 0;
}
