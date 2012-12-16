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
   int t;
   scanf("%d",&t);
   while(t--){
      bool adq=1;
      int n,x,sum=0;
      scanf("%d %d",&n,&x);
      int ar[n];
      for(int i=0;i<n;i++){
         scanf("%d",&ar[i]);
         sum+=ar[i];  
      }
      int div=sum/x;
      for(int i=0;i<n;i++)if(((sum-ar[i])/x)==div){
         adq=0;
         break;
      }
      if(adq)printf("%d\n",sum/x);
      else printf("-1\n");
   }
   return 0;
}