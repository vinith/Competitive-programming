using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define size 100000000
#define limit 10005
bool primes[size]={false};
void pre(){
  primes[0]=primes[1]=true;
  for(long i=4;i+2<size;i+=2)primes[i]=true;
  for(int i=3;i<limit;i+=2){
    if(!primes[i]){
      for(long j=i+i;j+i<size;j+=i)primes[j]=true;
    }
  }  
}
int main(){
  pre();
  /*for(long i=1;i<=99998953;i++){
    if(!primes[i])printf("%ld\n",i);
  }
  int n=1;
  printf("2\n");
  for(long i=3;i<=99998953;i++){
    if(!primes[i])n++;
    if(n==101){
      //printf("%ld\n",i);
      n=1;
    }
  }*/
  return 0;
}
