#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int n,graph[250][250];
void floydWarshall(){
  int temp;
  for(int k=0;k<n;k++)
    for(int i=0;i<n;i++)
      for(int z=0;z<n;z++)
        graph[i][z]=min(graph[i][z],graph[i][k]+graph[k][z]);
}
int main(){
  int m,s,g,d,temp;
  scanf("%d",&n);
  for(int i=0;i<n;i++)for(int k=0;k<n;k++)scanf("%d",&graph[i][k]);
  floydWarshall();
  scanf("%d",&m);
  while(m--){
    scanf("%d %d %d",&s,&g,&d);
    temp=graph[s][g]+graph[g][d];
    printf("%d %d\n",temp,temp-graph[s][d]);
  }
}