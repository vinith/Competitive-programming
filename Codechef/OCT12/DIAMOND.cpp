#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int c,n;
int v[2001];
long long solve(int start,int end){
   if(start>end||start>end||end<0)return 0;
   //cout<<start<<" -- "<<end<<endl;
   if(start==end){
      c++;
      //cout<<v[start]<<endl;
      return v[start];
   }else{
      long long ans=0;
      //cout<<start<<" -- "<<end<<endl;
      if((start+1)==end){
         //cout<<v[start]<<endl;
         ans+=v[start];
         //cout<<v[end]<<endl;
         ans+=v[end];
         c+=2;
      }else{
         int temp=end-start;
         if(temp%2==0)temp/=2;
         else temp=temp/2+1;
         if((start+2)<=end){
            //cout<<v[start]<<endl;
            ans+=(temp*v[start]+solve(start+2,end));
            if(((start+1)<=end) && ((end-1)>=start)){
               //cout<<v[start]<<endl;
               ans+=(temp*v[start]+solve(start+1,end-1));
            }
         }
         if((end-2)>=start){
            //cout<<v[end]<<endl;
            ans+=(temp*v[end]+solve(start,end-2));
            if(((start+1)<=end) && ((end-1)>=start)){
               //cout<<v[end]<<endl;
               ans+=(temp*v[end]+solve(start+1,end-1));
            }
         }
      }
      return ans;
   }
}
int main(){
   int t;
   scanf("%d",&t);
   while(t--){
      c=0;
      scanf("%d",&n);
      for(int i=0;i<n;i++)scanf("%d",&v[i]);
         cout<<solve(0,n-1);
      cout<<" "<<c<<endl;
   }
   return 0;
}