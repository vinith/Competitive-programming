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
long long fastEx(long long a,int p){
   if(p==0)return 1;
   else if(p==1) return a;
   else if(p%2) return (a*(fastEx((a*a)%mod,(p-1)>>1))%mod);
   else return fastEx((a*a)%mod,p>>1);
}
int main(){
   int t,n;
   long long ans;
   scanf("%d",&t);
   while(t--){
      ans=0;
      scanf("%d",&n);
      ans=n%2?fastEx(3,n)-3:fastEx(3,n)+3;
      if(ans<0)ans+=mod;
      printf("%lld\n",ans);
   }
   return 0;
}