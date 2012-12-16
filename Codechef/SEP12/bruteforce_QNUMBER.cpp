#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long n,k,temp;
int t,q,t1,t2,ans=0;
int main(){
   scanf("%ld %d",&n,&q);
   while(q--){
      ans=0;
      scanf("%d %ld",&t,&k);
      temp=sqrt(n)+1;
      if(t==1){
         for(long i=1;i<=temp;i++){
            if(n%i==0 && k%i==0)ans++;
            if(n%i==0)if(n%(n/i)==0 && k%(n/i)==0)ans++;
         }
      }
      else if(t==2){
         for(long i=1;i<=temp;i++){
            //cout<<i<<endl;
            if(n%i==0 && i%k==0)ans++;
            if(n%i==0)if(n%(n/i)==0 && (n/i)%k==0)ans++;
         }
      }
      else{
         for(long i=1;i<=temp;i++){
            if(n%i==0 && i%k!=0)ans++;
            if(n%i==0)if(n%(n/i)==0 && (n/i)%k!=0)ans++;
         }
      }
      cout<<ans<<endl;
   }
   return 0;
}