//come from full to zero, that is a better strategy and makes memo easier
using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
int target,n;
int coins[501][2];
int ans[10001];
int main(){
  int t,empty,full,op;
  bool flag;
  scanf("%d",&t);
  while(t--){
    memset(ans,999999,sizeof(ans));
    scanf("%d %d",&empty,&full);
    target=full-empty;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d %d",&coins[i][0],&coins[i][1]);
    }
    for(int i=0;i<=target;i++){
      for(int k=0;k<n;k++){
        if(coins[k][1]<i){
          ans[i]=min(ans[i],coins[k][0]);
        }
      }
    }
    op=ans[target];
    if(op==999999)printf("This is impossible.\n");
    else printf("The minimum amount of money in the piggy-bank is %d.\n",op);
  }
  return 0;
}