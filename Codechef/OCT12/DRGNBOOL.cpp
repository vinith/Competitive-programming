#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main(){
   int t,n,m,c,l,ans;
   scanf("%d",&t);
   while(t--){
      ans=0;
      int hp[101]={0};
      scanf("%d %d",&n,&m);
      for(int i=0;i<n;i++)scanf("%d %d",&c,&l),hp[l]+=c;
      for(int i=0;i<m;i++)scanf("%d %d",&c,&l),hp[l]-=c;
      for(int i=1;i<=100;i++)if(hp[i]<0)ans+=hp[i];
      printf("%d\n",-ans);
   }
   return 0;
}