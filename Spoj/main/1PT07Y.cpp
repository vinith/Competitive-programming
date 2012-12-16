using namespace std;
#include<iostream>
#include<cstdio>
#include<map>
#include<vector>

int m,n,i;
map<int,vector<int> > graph;
bool vv[10001];
map<int,map<int,bool> > ve;
bool hasCycle=false;

void checkCycle(int x){
  vv[x]=true;
  if(hasCycle==true)return;
  vector<int>::iterator it,en;
  en=graph[x].end();
  for(it=graph[x].begin();it!=en;it++){
    i=*it;
    if(x==i)continue;
    if(vv[i]==true && ve[x][i]==false){
      //new edge to an already visited vertex forms a cycle
      hasCycle=true;
      return;
    }else if(vv[i]==false && ve[x][i]==false){
      //mark edge as used
      ve[x][i]=ve[i][x]=true;
      checkCycle(i);
    }
  }
}

int main(){
  int u,v;
  scanf("%d %d",&n,&m);
  for(int i=0;i<m;i++){
    scanf("%d %d",&u,&v);
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  checkCycle(1);
  if(hasCycle)printf("NO\n");
  else printf("YES\n");
  return 0;
}