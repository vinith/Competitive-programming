#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
#define mod 1000000007
int n,start;
long long solve(int prev,int pos){
   if(pos==n+1){
      if(prev^start) return 1;
      return 0;
   }else{
      long long ans=0;
      for(int i=1;i<=4;i++)
         if(i!=prev)ans+=(solve(i,pos+1)%mod);
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
      printf("%lld\n",ans);
   }
   return 0;
}
