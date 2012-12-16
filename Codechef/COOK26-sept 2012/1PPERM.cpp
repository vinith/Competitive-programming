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
#define lim 5000001
long long ans[lim];
long long fastEx(long a,long p){
   long long sum=0;
   ans[1]=1;
   ans[2]=2;
   sum=3;
   for(int i=3;i<=lim;i++){
      ans[i]=(sum*2)%mod;
      sum+=ans[i];
   }
}
int main(){
   pre();
   int t,n;
   scanf("%d",&t);
   while(t--){
      scanf("%d",&n);
      printf("%lld\n",ans[n]);
   }
   return 0;
}