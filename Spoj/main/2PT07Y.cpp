using namespace std;
#include<iostream>
#include<cstdio>
#include<map>

#include<vector>

int m,n,i;
map<int,vector<int> > graph;
bool vv[10001];
int visitCount=0;

void checkCycle(int previous,int x){
  if(visitCount>n)return;
  //vv[x]=true;
  visitCount++;
  vector<int>::iterator it,en;
  en=graph[x].end();
  for(it=graph[x].begin();it!=en;it++){
    i=*it;
    if(x==i || i==previous)continue;
    else{
      checkCycle(x,i);
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
  checkCycle(1,1);
  if(visitCount!=n)printf("NO\n");
  else printf("YES\n");
  return 0;
}