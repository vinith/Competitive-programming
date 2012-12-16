#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
inline long long read()
{
   char temp;
   long long x=0;
   temp=getchar_unlocked();
   while(temp<48)temp=getchar_unlocked();
   x+=(temp-'0');
   temp=getchar_unlocked();
   while(temp>=48){
      x=x*10;
      x+=(temp-'0');
      temp=getchar_unlocked();
   }
   return x; 
}
bool ret;
long long arr[1001],k1[1001],k2[1001],ans[1001];
int n,top1,top2,tops;
inline bool solved(){
   long long temp=0;
   for(int i=0;i<top1;i++)temp^=k1[i];
   if(temp)return false;
   for(int i=0;i<top2;i++)temp^=k2[i];
   if(temp) return false;
   return true;
}
inline bool NotSame(){
   long long temp=ans[0];
   for(int i=1;i<n;i++){
      if(ans[i]!=temp)return true;
   }
   return false;
}
void solve(int pos){
   if(ret)return;
   if(pos==n){
      if(solved() && NotSame()){
         ret=true;
         for(int i=0;i<n;i++)printf("%lld ",ans[i]);
         putchar('\n');
      }/*else{
         cout<<"not solved\n";
         for(int i=0;i<n;i++)printf("%d ",ans[i]);
         putchar('\n');
      }*/
   }else{
      //if(pos%2){
      k1[top1++]=arr[pos];
      ans[tops++]=1;
      solve(pos+1);
      top1--;
      tops--;
      k2[top2++]=arr[pos];
      ans[tops++]=2;
      solve(pos+1);
      tops--;
      top2--;
      /*}else{
         k2[top2++]=arr[pos];
         ans[tops++]=2;
         solve(pos+1);
         tops--;
         top2--;
         k1[top1++]=arr[pos];
         ans[tops++]=1;
         solve(pos+1);
         top1--;
         tops--;
      }*/
   }
}
int main(){
   int t;
   scanf("%d",&t);
   while(t--){
      scanf("%d",&n);
      top1=top2=tops=0;
      ret=false;
      for(int i=0;i<n;i++)arr[i]=read();
      solve(0);
      if(!ret)cout<<"uh oh!!\n";
      //cout<<endl;
      //cout<<t<<endl;
   }
  return 0;
}