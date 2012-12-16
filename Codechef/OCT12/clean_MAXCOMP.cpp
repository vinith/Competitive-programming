#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int intv[55][55];
int main(){
   int t,n,s,e,c;
   int icount,distinct;
   scanf("%d",&t);
   while(t--){
      int p[3005]={0};
      int m[3005]={0};
      int interval[3005][3];
      distinct=icount=0;
      scanf("%d",&n);
      memset(intv,-1,sizeof(int)*55*55);
      for(int i=1;i<=n;i++){
         scanf("%d %d %d",&s,&e,&c);
         if(intv[s][e]==-1)distinct++;
         intv[s][e]=max(intv[s][e],c);
      }
      icount=distinct;
      for(int i=48;i>=0;i--)for(int k=i;k>=0;k--){
         if(intv[k][i]!=-1){
            interval[icount][0]=k;
            interval[icount][1]=i;
            interval[icount][2]=intv[k][i];
            icount--;
         }
      }
      icount=distinct;
      for(int i=1;i<=icount;i++){
         //find prev
         for(int k=i-1;k>=1;k--){
            if(interval[k][1]<=interval[i][0]){
               p[i]=k;
               break;
            }
         }
      }
      //find max
      for(int i=1;i<=icount;i++)m[i]=max(interval[i][2]+m[p[i]],m[i-1]);
      printf("%d\n",m[icount]);
   }
   return 0;
}