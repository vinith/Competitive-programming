using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
int graph[50][50];
map<long,long>paths;
int m,n,c,u,v;
void solve(int x,map<int,map<int,bool> > visited,long cost,map<int,bool>vv){
  int temp;
  //cout<<x<<endl;
  vv[x]=true;
  if(x==n){
    paths[cost]++;
    //cout<<cost<<endl;
  }else{
    for(int i=1;i<=max(m,n);i++){
      if((x!=i)&&(vv[i]!=true)&&(graph[x][i]!=0) && (visited[x][i]!=true)){
        //cout<<"hh"<<endl;
        //cout<<x<<" "<<i<<" "<<cost+graph[x][i]<<endl;
        visited[x][i]=true;
        solve(i,visited,cost+graph[x][i],vv);
      }
    }
  }
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    paths.clear();
    memset(graph,0,sizeof(graph));
    map<int,map<int,bool> > visited;
    map<int,bool> vv;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
      scanf("%d %d %d",&u,&v,&c);
      graph[u][v]=c;
      graph[v][u]=c;
    }
    //for(int i=0;i<;i++){
      //for(int k=0;k<n;k++){
        //cout<<graph[i][k];
      //}
      //cout<<endl;
    //}
    solve(1,visited,0,vv);
    visited.clear();
    map<long,long>::iterator it=paths.begin();
    printf("%ld\n",it->second);
  }  
  return 0;
}