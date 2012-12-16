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
   int t,n,s,e,c;
   scanf("%d",&t);
   while(t--){
      int m[2305]={0};
      map<int,map<int,int> > intv;
      scanf("%d",&n);
      for(int i=1;i<=n;i++){
         scanf("%d %d %d",&s,&e,&c);
         intv[e][s]=max(intv[e][s],c);
      }
      int i=0;
      map<int,int>::iterator ii;
      map<int, map<int,int> >::iterator it=intv.begin(),en=intv.end(),temp;
      for(;it!=en;it++,i++){
         ii=it->second.begin();
         cout<<ii->first<<" "<<it->first<<" "<<ii->second<<endl;
      }
   }
   return 0;
}