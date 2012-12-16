using namespace std;
#include<iostream>
#include<cstdio>
#define size 15
#define max1 (a,b) (a>b?a:b)
typedef unsigned long long ll;
ll mat[size][size]={0};
ll memo[size][size]={0};
ll find(int i,int j)
{
	ll temp;
	if(i>=size||j<0)
		return 0;
	temp=memo[i][j];
	if(temp!=0)
		return temp;
	temp=max(find(i+1,j+1),find(i+1,j))+mat[i][j];
	memo[i][j]=temp;
	return temp;
}
int main()
{
	freopen("problem18","r",stdin);
	int n=size;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cin>>mat[i][j];
		}
	}
	/*for(int i=0;i<n;i++){
	  for(int j=0;j<=i;j++){
	  cout<<mat[i][j]<<" ";
	  }
	  cout<<endl;
	  }*/
	cout<<find(0,0)<<endl;
	return 0;
}
