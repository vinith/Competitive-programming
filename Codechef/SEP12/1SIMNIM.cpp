#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
bool ret;
long long arr[1001];
int ans[1001];
int n,tops;
void solve(int pos,long long cur){
   if(ret)return;
   if(cur==0 && tops>0 && tops<n-1){
      for(int i=0;i<n;i++)printf("%d ",ans[i]);
      putchar('\n');
      ret=true;
   }
   if(pos==n){
      return;
   }else{
      ans[pos]=1;
      tops++;
      solve(pos+1,cur^arr[pos]);
      ans[pos]=2;
      tops--;
      solve(pos+1,cur);
   }
}
int main(){
   int t;
   scanf("%d",&t);
   while(t--){
      scanf("%d",&n);
      memset(ans,0,sizeof(int)*1001);
      for(int i=0;i<n;i++)ans[i]=2;
      tops=0;
      ret=false;
      for(int i=0;i<n;i++)scanf("%lld",&arr[i]);
      solve(0,0);
      if(!ret)cout<<"uh oh!!\n";
   }
  return 0;
}