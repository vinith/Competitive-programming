using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<climits>
long memo[100001][3];
long graph[100001][3];
int n;
long solve(int x,int y,long cost){
  /*if(x>=n||y>2||y<0)
    cout<<"uh oh!!"<<endl;
  */
  if(x==n-1&&y==1)
    return cost;
  else if(memo[x][y]!=0){
    return memo[x][y]; 
  }
  else{
    long a,b,t1,t;
    t=graph[x][y];
    if(x==n-1){//no next row
      if(y==0){
        t1=solve(x,1,t+graph[x][1]);
        memo[x][y]=t1;
        return t1;
      }
    }
    else{//not last row, x+1 allowed
      if(x==n-2&&y!=0){
        if(y==1){
          t1=solve(x+1,1,t+graph[x+1][1]);
          memo[x][y]=t1;
          return t1;
        }
        else if(y==2){
          t1=solve(x+1,1,t+graph[x+1][1]);
          memo[x][y]=t1;
          return t1;
        }
      }
      else{
      if(y==0){//y-1 not allowed
        a=min(solve(x,1,t+graph[x][1]),solve(x+1,0,t+graph[x+1][0]));
        b=solve(x+1,1,t+graph[x+1][1]);
        t1=min(a,b);
        memo[x][y]=t1;
        return t1;
      }
      else if(y==2){//y+1 not allowed
        t1=min(solve(x+1,2,t+graph[x+1][2]),solve(x+1,1,t+graph[x+1][1]));
        memo[x][y]=t1;
        return t1;
      }
      else{//y==1
        a=min(solve(x,2,t+graph[x][2]),solve(x+1,2,t+graph[x+1][2]));
        b=min(solve(x+1,1,t+graph[x+1][1]),solve(x+1,0,t+graph[x+1][0]));
        t1=min(a,b);
        memo[x][y]=t1;
        return t1;
      }
      }
    }
  }
}
int main(){
  int Case=0;
  while(scanf("%d",&n)&&n!=0){
    Case++;
    memset(graph,0,sizeof(graph));
    memset(memo,0,sizeof(memo));
    memo[n-1][2]=LONG_MAX;
    for(int i=0;i<n;i++)
      for(int k=0;k<3;k++)
        scanf("%ld",&graph[i][k]);
      printf("%d. %ld\n",Case,solve(0,1,graph[0][1]));
  }
  return 0;
}