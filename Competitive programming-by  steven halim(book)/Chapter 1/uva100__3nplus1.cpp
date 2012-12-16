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
   int i,j,current,best;
   int ans;
   long long n;
   while(scanf("%d %d",&i,&j)>0){
      if(i>j)swap(i,j);
      best=0;
      for(int k=i;k<=j;k++){
         //cout<<k<<endl;
         n=k;
         current=0;
         current++;
         while(n^1){
            if(n%2) n=3*n+1;
         else n=n>>1;
         current++;
         }
         if(current>best){
            best=current;
            ans=k;
         }
      }
      printf("%d %d %d\n",i,j,best);
   }
   return 0;
}