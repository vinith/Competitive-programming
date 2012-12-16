using namespace std;
#include<iostream>
#include<cstdio>
int m,n;
bool graph[10001][10001];
bool vv[10001],ve[10001][10001];
bool hasCycle=false;
void checkCycle(int x){
  //cout<<"vertex "<<x<<endl;
  vv[x]=true;
  if(hasCycle==true)return;
  for(int i=1;i<=n;i++){
    if(x==i)continue;
    if(graph[x][i]==true){
      //cout<<"can go to "<<i<<"   "<<x<<endl;
      if(vv[i]==true && ve[x][i]==false){
        //cout<<"cycle "<<x<<" "<<i<<endl;
        hasCycle=true;
        return;
      }else if(ve[x][i]==false){
        //cout<<"new edge "<<x<<" "<<i<<endl;
        ve[x][i]=true;
        checkCycle(i);
      }
    }
  }
}
int main(){
  int u,v;
  scanf("%d %d",&n,&m);
  for(int i=0;i<m;i++){
    scanf("%d %d",&u,&v);
    graph[u][v]=true;
  }
  checkCycle(1);
  if(hasCycle)printf("NO\n");
  else printf("YES\n");
  return 0;
}