using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<climits>
long memo[100001][3];
long graph[100001][3];
int n;
long paths;
long solve(int x,int y,long cost){
  if(x>=n||y>2||y<0)
    return LONG_MAX;
  else if(x==n-1&&y==1){
    return cost+graph[x][1];
  }
  //else if(memo[x][y]!=0){
    //return memo[x][y]; 
  //}
  else{
    long a,b,t;
    t=cost+graph[x][y];
    a=min(solve(x,y+1,t),solve(x+1,y+1,t));
    b=min(solve(x+1,y,t),solve(x+1,y-1,t));
    t=min(a,b);
    //memo[x][y]=t;
    printf("solved for %d %d answer is %ld\n",x,y,t);
    return t;
  }
}
int main(){
  int Case=0;
  while(scanf("%d",&n)&&n!=0){
    Case++;
    memset(graph,0,sizeof(graph));
    memset(memo,0,sizeof(memo));
    for(int i=0;i<n;i++)
      for(int k=0;k<3;k++)
        scanf("%ld",&graph[i][k]);
    printf("%d. %ld\n",Case,solve(0,1,0L));
    /*for(int i=0;i<n;i++){
      for(int k=0;k<3;k++){
        printf("%ld ",graph[i][k]);
      }
      cout<<endl;
    }*/
  }
  return 0;
}