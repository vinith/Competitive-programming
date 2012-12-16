#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int lcs(string x,string y,int n,int m){
   static int dp[6101][6101];
   for(int i=0;i<=n;i++)dp[i][0]=0;
   for(int i=0;i<=m;i++)dp[0][m]=0;
   for(int i=1;i<=n;i++)for(int k=1;k<=m;k++){
      if(x[i-1]==y[k-1])dp[i][k]=1+dp[i-1][k-1];
      else dp[i][k]=max(dp[i][k-1],dp[i-1][k]);
   }
   return dp[n][m];
}
int main(){
   int t,len;
   scanf("%d",&t);
   while(t--){
      string str;
      cin>>str;
      string rev(str.rbegin(),str.rend());
      len=str.length();
      printf("%d\n",len-lcs(str,rev,len,len));
   }
   return 0;   
}
