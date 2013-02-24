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
using namespace std;

int main(){   
  int n,pos,top;
  int ord[1111],b[1111];
  bool eq;
  while(scanf("%d",&n)&&n!=0){
    while(scanf("%d",&ord[0])&&ord[0]!=0){
      stack <int> station;
      for(int i=1;i<n;i++)scanf("%d",&ord[i]);
      for(int i=1,pos=top=0;i<=n;i++){
        if(ord[pos]==i){
          b[top++]=i;
          pos++;
        }else if(!station.empty()&&station.top()==ord[pos]){
          b[top++]=station.top();
          pos++;
          station.pop();
          i--;
        }else station.push(i);
      }
      while(!station.empty()){
        b[top++]=station.top();
        station.pop();
      }
      eq=true;
      for(int i=0;i<n;i++){
        if(ord[i]!=b[i]){
          eq=false;
          break;
        }
      }
      if(eq)printf("Yes\n");
      else printf("No\n");
    }
    putchar('\n');
  }
  return 0;
}
