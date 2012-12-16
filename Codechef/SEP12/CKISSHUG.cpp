#include<iostream>
#include<cstdio>
using namespace std;
#define mod 1000000007
long long fastEx(long long a,int p){
   if(p==0)return 1;
   else if(p==1) return a;
   else if(p%2) return (a*(fastEx((a*a)%mod,(p-1)/2))%mod);
   else return fastEx((a*a)%mod,p/2);
}
int main(){
   int t,n,temp,lim;
   long long ans,prev;
   scanf("%d",&t);
   while(t--){
      scanf("%d",&n);
      if(n%2==0)lim=(n-1)/2;
      else lim=n/2;
      ans=-2*(1-fastEx(2LL,lim));
      ans=((ans<<1)+2)%mod;
      if(n%2==0)ans+=fastEx(2LL,lim+1);
      printf("%lld\n",ans%mod);
   }   
   return 0;
}