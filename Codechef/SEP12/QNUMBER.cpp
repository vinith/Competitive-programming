#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define limit 1000001
bool primes[limit]={false};
long n,k,temp;
int t,q,t1,t2;
void sieve(){
   primes[0]=primes[1]=true;
   for(int i=4;i+2<limit;i+=2)primes[i]=true;
   for(int i=3;i<limit;i+=2){
      if(!primes[i]){
         for(int j=i+i;j+i<limit;j+=i)primes[j]=true;
      }
   }  
}
long gcd(long a,long b){
   while(b!=0){
      temp=a;
      a=b;
      b=temp%b;
   }
   return a;
}
int numFacts(long n){
   int ans=1,times;
   //cout<<n<<endl;
   for(int i=2;n>1;i++){
      if(i>=limit){ans=ans<<1;break;}
      if(!primes[i] && n%i==0){
         times=0;
         while(n%i==0){
            times++;
            n/=i;
         }
         ans*=(times+1);
         //printf("factor:%d exponent:%d\n",i,times);
      }
   }
   return ans;
}
int main(){
   sieve();
   scanf("%ld %d",&n,&q);
   while(q--){
      scanf("%d %ld",&t,&k);
      if(t==1)printf("%d\n",numFacts(gcd(n,k)));
      else if(t==2)printf("%d\n",n%k==0?numFacts(n/k):0);
      else{
         t1=numFacts(n);
         t2=(n%k==0?numFacts(n/k):0);
         printf("%d\n",t1-t2);
      }
   }
   return 0;
}