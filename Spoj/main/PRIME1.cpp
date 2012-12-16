using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define limit 3201
bool primes[limit]={false};
void pre(){
  primes[0]=primes[1]=true;
  for(int i=2;i<limit;i++){
    if(!primes[i]){
      for(int j=i+i;j+i<limit;j+=i)primes[j]=true;
    }
  }  
}
int main(){
  pre();
  /*for(int i=1;i<100;i++){
    if(!primes[i])printf("%d\n",i);
  }*/
  bool isprime;
  long m,n;
  int t;
  scanf("%d",&t);
  while(t--){
    scanf("%ld %ld",&m,&n);
    if(m==1)m+=1;
    if(m==2){
      if(n<2)continue;
      printf("2\n");
      m+=1;
    }
    if(m%2==0)m+=1;
    for(long i=m;i<=n;i+=2){
      isprime=true;
      for(int j=3;j*j<=i;j+=2){
        if(!primes[j]){
          if(i%j==0){
            isprime=false;
            break;
          }
        }
      }
      if(isprime)printf("%ld\n",i);
    }
    printf("\n");
  }
  return 0;
}