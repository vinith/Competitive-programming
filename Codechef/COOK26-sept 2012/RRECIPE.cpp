#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;
#define mod 10000009
int main(){
   int t,l,temp;
   bool ok=true;
   long long ans=1;
   scanf("%d",&t);
   char st[1000001];
   while(t--){
      ok=true;
      ans=1;
      scanf("%s",st);
      l=strlen(st);
      //cout<<st[l-0];
      temp=l/2;
      l--;
      for(int i=0;i<temp;i++){
         if(st[i]=='?'){
            if(st[l-i]=='?')
               ans=(ans*26)%mod;
         }else{
            if(!(st[l-i]=='?'||st[l-i]==st[i])){ok=false;break;}
         }
      }
      l++;
      if(ok){
         if(l%2==1)if(st[temp]=='?')ans=(ans*26)%mod;
         printf("%lld\n",ans);
      }
      else printf("%d\n",0);
   }
   return 0;
}