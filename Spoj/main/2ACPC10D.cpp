using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<climits>
int memo[100001][3];
int graph[100001][3];
int n;
inline int read()
{
  char temp;
  bool neg=false;
  int x=0;
  temp=getchar_unlocked();
  while(temp<45)temp=getchar_unlocked();
  if(temp=='-')
    neg=true;
  else
    x+=(temp-'0');
  temp=getchar_unlocked();
  while(temp>=48){
    x=(x<<3)+(x<<1);
    x+=(temp-'0');
    temp=getchar_unlocked();
  }
  if(!neg)
    return x;
  else
    return x*-1ll;
}
int solve(int x,int y){
  if(x>=n||y>2||y<0)
    return 999999;
  else if(x==n-1&&y==1){
    return graph[x][1];
  }
  else if(memo[x][y]!=-1){
    //cout<<"used"<<endl;
    return memo[x][y]; 
  }
  else{
    int a,b,t;
    t=graph[x][y];
    a=t+min(solve(x,y+1),solve(x+1,y+1));
    b=t+min(solve(x+1,y),solve(x+1,y-1));
    t=min(a,b);
    memo[x][y]=t;
    return t;
  }
}
int main(){
  int Case=0;
  while(scanf("%d",&n)&&n!=0){
    Case++;
    //memset(graph,0,sizeof(graph));
    memset(memo,-1,sizeof(memo));
    for(int i=0;i<n;i++)
      for(int k=0;k<3;k++)
        graph[i][k]=read();
    printf("%d. %d\n",Case,solve(0,1));
  }
  return 0;
}