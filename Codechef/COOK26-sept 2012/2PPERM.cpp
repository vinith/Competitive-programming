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
long long fastEx(long n,long p){
   if(p==0)return 1;
   if(p==1) return n;
   else if(p%2==0) return fastEx((n*n)%mod,p/2);
   else return (n*(fastEx((n*n)%mod,(p-1)/2)))%mod;
}
int main(){
   int t,n;
   scanf("%d",&t);
   while(t--){
      scanf("%d",&n);
      if(n==1)printf("1\n");
      else printf("%lld\n",(2*fastEx(3,n-2))%mod);
   }
   return 0;
}