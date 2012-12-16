using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
inline int read(){
  char temp;
  int x=0;
  temp=getchar_unlocked();
  while(temp<48)temp=getchar_unlocked();
  x+=(temp-'0');
  temp=getchar_unlocked();
  while(temp>=48){
    x=x*10;
    x+=(temp-'0');
    temp=getchar_unlocked();
  }
  return x;
  
}
int graph[50][50];
int paths[1000]={0};
bool visited[20];
int m,n,c,u,v;
void solve(int x,int cost){
  int temp;
  //cout<<x<<endl;
  visited[x]=true;
  if(x==n){
    paths[cost]++;
    //cout<<cost<<endl;
  }else{
    for(int i=1;i<=n;i++){
      if((x!=i) && (graph[x][i]!=0) && (visited[i]==false)){
        //cout<<"hh"<<endl;
        solve(i,cost+graph[x][i]);
      }
    }
  }
  visited[x]=false;
}
int main(){
  int t;
  t=read();
  while(t--){
    memset(paths,0,sizeof(paths));
    memset(graph,0,sizeof(graph));
    memset(graph,false,sizeof(graph));
    n=read();m=read();
    for(int i=0;i<m;i++){
      u=read();v=read();c=read();
      graph[u][v]=c;
      graph[v][u]=c;
    }
    //for(int i=0;i<;i++){
      //for(int k=0;k<n;k++){
        //cout<<graph[i][k];
      //}
      //cout<<endl;
    //}
    solve(1,0);
    for(int i=0;i<1000000;i++){
      if(paths[i]!=0){
        printf("%d\n",paths[i]);
        break;
      }
    }
  }  
  return 0;
}