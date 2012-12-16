#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
#define mod 100000000000007
int c,n;
int v[2001];
long double memo[2001][2001],prob,temp;
long double solve(int start,int end){
   if(start>end||start>end||end<0)return 0;
   //cout<<start<<" -- "<<end<<endl;
   if(start==end){
      c++;
      //cout<<v[start]<<endl;
      return v[start];
   }else if(memo[start][end]){
      //cout<<"used"<<endl;
      return memo[start][end];
   }else{
      long double ans=0;
      //cout<<start<<" -- "<<end<<endl;
      if((start+1)==end){
         //cout<<v[start]<<endl;
         ans+=1.0*v[start];
         //cout<<v[end]<<endl;
         ans+=1.0*v[end];
         c+=2;
      }else{
         int t=end-start;
         if(t%2==0)t/=2;
         else t=t/2+1;
         temp=1.0*t;
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
      //ans*=prob;
      memo[start][end]=ans;
      return ans;
   }
}
long double fastEx(long double a,int p){
   if(p==0)return 1.0;
   else if(p==1) return a;
   else if(p%2) return (a*(fastEx((a*a),(p-1)>>1)));
   else return fastEx((a*a),p>>1);
}
int main(){
   int t;
   scanf("%d",&t);
   while(t--){
      memset(memo,0,sizeof(long double)*2001*2001);
      c=0;
      scanf("%d",&n);
      for(int i=0;i<n;i++)scanf("%d",&v[i]);
      prob=1/fastEx(2.0,n-1);
      printf("%Lf\n",solve(0,n-1));
   }
   return 0;
}