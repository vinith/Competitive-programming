using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<bitset>
#define limit 100000001
#define sq 31623
bitset <limit>primes;
void pre(){
   primes[0]=primes[1]=1;
   for(int i=4;i+2<limit;i+=2)primes[i]=1;
   for(int i=3;i<sq;i+=2)if(!primes[i])for(int j=i*i;j+i<limit;j+=i)primes[j]=1;
}
int main(){
   pre();
   cout<<"out of sieve\n";
   int m,n,t;
   scanf("%d",&t);
   while(t--){
      scanf("%d %d",&m,&n);
      for(int i=m;i<=n;i++)if(!primes[i])printf("%d\n",i);
      putchar('\n');
   }
   return 0;
}