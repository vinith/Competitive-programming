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
long long ans;
void solve(int start,int end,bool alice){
   if(start>end||start>end||end<0)return;
   else{
      bool turn=!alice;
      if(alice)ans+=v[start];solve(start+1,end,turn);
      if(alice)ans+=v[end];solve(start,end-1,turn);
   }
}
int main(){
   int t;
   scanf("%d",&t);
   while(t--){
      c=0;
      ans=0;
      scanf("%d",&n);
      for(int i=0;i<n;i++)scanf("%d",&v[i]);
         solve(0,n-1,true);
      cout<<ans<<" "<<c<<endl;
   }
   return 0;
}