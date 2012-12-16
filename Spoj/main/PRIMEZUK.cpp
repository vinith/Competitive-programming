using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define limit 31623
bool primes[limit]={false};
void pre(){
  primes[0]=primes[1]=true;
  for(int i=4;i+2<limit;i+=2)primes[i]=true;
  for(int i=3;i<limit;i+=2){
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
  int m,n;
  int t,tsq,bound;
  t=read();
  while(t--){
    m=read();n=read();
    if(m==1)m+=1;
    if(m==2){
      if(n<2)continue;
      printf("2\n");
      m+=1;
    }
    if(m%2==0)m+=1;
    for(int i=m;i<=n;i+=2){
      isprime=true;
      tsq=sqrt(i)+1;
      for(int j=3;j<tsq;j+=2){
        if(!primes[j]){
          if(i%j==0){
            isprime=false;
            break;
          }
        }
      }
      if(isprime)printf("%d\n",i);
    }
    putchar('\n');
  }
  return 0;
}