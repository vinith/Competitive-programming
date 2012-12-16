#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;
bool pathExists(int u,int v){
   
}
int main(){
   int t,m1,m2,n,u,v,c;
   int ar1[5001][5001];
   long long ccost,ocost;
   scanf("%d",&t);
   while(t--){
      ccost=ocost=0;
      scanf("%d %d %d",&n,&m1,&m2);
      bool mat[5001][5001]={false};
      for(int i=0;i<m1;i++){
         scanf("%d %d %d",&u,&v,&c);
         ar1[u][v]=c;  
      }
      for(int i=0;i<m2;i++){
         scanf("%d %d %d",&u,&v,&c);
         if(pathExists
         ccost+=c;
         mat[u][v]=true;
      }
   }
   return 0;
}