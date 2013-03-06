#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
#include<deque>
#include<stack>
#include<set>
#include<queue>
using namespace std;
map<int,bool> used;
map<int, vector<int> > graph;
struct mynode{
  int node,lvl;
};
int count,vcount;
void bfs(int node,int ttl){
  mynode p,q;
  vector<int>::iterator it;
  queue<mynode> bfsq;
  p.node=node;
  p.lvl=0;
  bfsq.push(p);
  used[node]=true;
  while(!bfsq.empty()){
    p=bfsq.front();
    vcount++;
    bfsq.pop();
    if(p.lvl<ttl){
      for(it=graph[p.node].begin();it!=graph[p.node].end();it++){
        if(!used[*it]){
          used[*it]=true;
          q.node=*it;
          q.lvl=p.lvl+1;
          bfsq.push(q);
        }
      }
    }
  }
}
int main(){   
  int n,a,b;
  int start,ttl,Case=1;
  while(scanf("%d",&n)&&n!=0){
    for(int i=0;i<n;i++){
      scanf("%d %d",&a,&b);
      graph[a].push_back(b);
      graph[b].push_back(a);
      used[a]=used[b]=false;
    }
    ::count=used.size();
    map<int,bool>::iterator it;
    while(scanf("%d %d",&start,&ttl)&&!(start==0&&ttl==0)){
      vcount=0;
      bfs(start,ttl);
      printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",
          Case++,::count-vcount,start,ttl);
      for(it=used.begin();it!=used.end();it++)
        used[it->first]=false;
    }
    graph.clear();
    used.clear();
  }
  return 0;
}
