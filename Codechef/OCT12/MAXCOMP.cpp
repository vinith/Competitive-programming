#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int intv[49][49];
int main(){
   int t,n,s,e,c;
   int icount,distinct;
   scanf("%d",&t);
   while(t--){
      int p[2305]={0},m[2305]={0};
      int interval[2305][3];
      distinct=icount=0;
      scanf("%d",&n);
      for(int i=1;i<=49;i++)for(int k=1;k<=49;k++)intv[i][k]=0;
      for(int i=1;i<=n;i++){
         scanf("%d %d %d",&s,&e,&c);
         if(intv[s][e]==0)distinct++;
         intv[s][e]=max(intv[s][e],c);
      }
      icount=distinct;
      for(int i=48;i>=1;i--)for(int k=i;k>=1;k--){
         if(intv[k][i]!=0){
            interval[icount][0]=k;
            interval[icount][1]=i;
            interval[icount][2]=intv[k][i];
            icount--;
         }
      }
      icount=distinct;
      for(int i=1;i<=icount;i++){
         //find p
         for(int k=i-1;k>=1;k++){
            if(interval[k][1]<=interval[i][0]){
               p[i]=k;
               break;
            }
         }
         //cout<<"interval: "<<interval[i][0]<<" "<<interval[i][1]<<endl;
         //cout<<"prev: "<<interval[p[i]][0]<<" "<<interval[p[i]][1]<<endl;
      }
      //find max
      for(int i=1;i<=icount;i++){
         m[i]=max(interval[i][2]+m[p[i]],m[i-1]);
         //printf("max of %d , %d\n",interval[i][2]+m[p[i]],m[i-1]);
      }
      printf("%d\n",m[icount]);
   }
   return 0;
}