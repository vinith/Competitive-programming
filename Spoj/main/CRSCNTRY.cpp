#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int LCS(int *x,int *y,int n,int m){
   int c[n+2][m+2];
   for(int i=0;i<=n;i++) for(int k=0;k<=m;k++){
      if(i==0||k==0)c[i][k]=0;
      else if(x[i-1]==y[k-1]) c[i][k]=c[i-1][k-1]+1;
      else c[i][k]=max(c[i-1][k],c[i][k-1]);
   }
   return c[n][m];
}
int main(){
   int d,n,m,t1,t2,cur,best;
   int x[2001],y[2001];
   scanf("%d",&d);
   while(d--){
      n=0;
      best=-1;
      while(scanf("%d",&t1)&&t1!=0)x[n++]=t1;
      while(scanf("%d",&t1)&&t1!=0){
         m=0;
         y[m++]=t1;
         while(scanf("%d",&t2)&&t2!=0)y[m++]=t2;
         cur=LCS(x,y,n,m);
         best=max(cur,best);
      }
      printf("%d\n",best);
   }
}