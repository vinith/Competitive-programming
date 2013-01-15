#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
#include<deque>
using namespace std;
int invCount(string s,int n){
  int l=n,ret=0;
  for(int i=0;i<l;i++)
    for(int k=i+1;k<l;k++)
      if(s[i]>s[k])ret++;
  return ret;
}
int main(){   
  int t,m,n;
  string s;
  scanf("%d",&t);
  getchar();getchar();
  while(t--){
    map<int,vector<string> > orders;
    map<int,vector<string> >::iterator it;
    vector<string>::iterator vs,vse;
    scanf("%d %d",&n,&m); getchar();
    while(m--){
      cin>>s;
      orders[invCount(s,n)].push_back(s);
    }
    for(it=orders.begin();it!=orders.end();it++){
      for(vs=it->second.begin(),vse=it->second.end();vs!=vse;vs++){
        cout<<*vs<<"\n";
      }
    }
    if(t!=0)putchar('\n');
  }
  return 0;
}
