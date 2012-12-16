#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
#define mod 1000000009
int n,start;
long long memo[10001]={0};
long long solve(int prev,int pos){
   //cout<<"--"<<prev<<" "<<pos<<endl;
   if(pos==n+1){
      if(prev^start) return 1;
      return 0;
   }else if(pos<=10000 && memo[pos]!=0){
      return memo[pos];
   }else{
      long long ans=0;
      for(int i=1;i<=4;i++){
         if(i!=prev)
            ans+=(solve(i,pos+1)%mod);
      }
      if(pos<=10000)memo[pos]=ans;
      return ans%mod;
   }
}
int main(){
   int t;
   long long ans;
   scanf("%d",&t);
   while(t--){
      ans=0;
      scanf("%d",&n);
      start=1;
      ans=solve(1,2);
      /*for(int i=1;i<=4;i++){
         start=i;
         ans+=solve(i,2);
      }*/
      printf("%lld\n",ans);
   }
   return 0;
}