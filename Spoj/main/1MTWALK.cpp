using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>

#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)<(b))?(b):(a))

int path[101][101],n,memo[101][101];
int solve(int x,int y,int maxx,int minn)
{        
	static int call=0;
	static int times=1;
	int sol1,sol2;
	int temp;
	if(x<0||y>=n||y<0||x>=n){
		return 99999;	
	}
	else if(memo[x][y]!=0&&call>0){
	     return memo[x][y];
	}
	else if(x==y&&x==n-1){
		cout<<"times "<<times++<<endl;
		temp=path[x][y];
		return max(maxx,temp)-min(minn,temp); 
	}
	else{
		call=1;
		temp=path[x][y];
		sol1=min(solve(x,y-1,max(maxx,temp),min(minn,temp)),solve(x-1,y-1,max(maxx,temp),min(minn,temp)));
		sol2=min(solve(x,y+1,max(maxx,temp),min(minn,temp)),solve(x+1,y+1,max(maxx,temp),min(minn,temp)));
		temp=min(sol1,sol2);
		memo[x][y]=temp;
		return temp;
	}

}
int main()
{       
	memo[0][0]=99999;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int k=0;k<n;k++)scanf
			("%d",&path[i][k]);
	printf("%d\n",solve(0,0,path[0][0],path[0][0]));

	return 0;
}
