#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int c,n;
int v[2001];
long long solve(int tot,int start,int end,bool alice){
   if(start>end||start>=n||end<0)return 0;
   if(start==end){
      if(alice)
      return tot+v[start];
      return tot;
   }else if(start<end){
      long long ans=0;
      if(alice){
         ans+=solve(tot+v[start],start+1,end,!alice);
         ans+=solve(tot+v[end],start,end-1,!alice);
      }else{
         ans+=solve(tot,start+1,end,!alice);
         ans+=solve(tot,start,end-1,!alice);
      }
      return ans;
   }
}
int main(){
   int t;
   scanf("%d",&t);
   while(t--){
      c=0;
      scanf("%d",&n);
      for(int i=0;i<n;i++)scanf("%d",&v[i]);
         cout<<((solve(0,0,n-1,1)*1.0)/(1<<(n-1)))<<endl;
   }
   return 0;
}