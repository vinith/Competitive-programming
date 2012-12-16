#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define limit 31622777
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
void facts(long n){
   int times;
   //cout<<n<<endl;
   for(int i=2;n>1;i++){
      if(i>=limit){printf("%ld^1 ",n);break;}
      if(!primes[i] && n%i==0){
         times=0;
         while(n%i==0){
            times++;
            n/=i;
         }
         printf("%d^%d ",i,times);
      }
   }
   putchar('\n');
}
int main(){
   long n;
   while(scanf("%ld",&n)&& n>0){
      facts(n);
   }
   return 0;
}