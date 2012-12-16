#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int c,n,nums;
int v[2001];
double ans,turn;
int main(){
   int t;
   scanf("%d",&t);
   while(t--){
      ans=c=0;
      scanf("%d",&n);
      for(int i=0;i<n;i++)scanf("%d",&v[i]);
      int mid;
      if(n%2)mid=(n/2)+1;
      else mid=n/2;
      for(int i=0;i<mid;i++){
         turn=0;
         for(int k=0;k<=i;k++){
            turn+=(v[k]+v[n-1-k]);
         }
         ans+=(turn/((i+1)*2));
      }
      printf("%lf\n",ans);
   }
   return 0;
}
