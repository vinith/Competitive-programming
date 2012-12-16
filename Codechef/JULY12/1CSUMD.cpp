using namespace std;
#include<iostream>
#include<cstdio>
#include<map>
#define lim 1000000
#define mod 1000000007
typedef long long ll;
ll answers[lim+1];
void pre(){
  for(int i=3;i<=lim;i++)
    answers[i]=(((2*answers[i-1]))+((2*answers[i-2])))%mod;
}
int main(){
  answers[0]=1;answers[1]=1;
  answers[2]=3;
  pre();
  int t;
  long n,term,t1,t2,current;
  scanf("%d",&t);
  while(t--){
    scanf("%ld",&n);
    if(n<=lim)
      printf("%lld\n",answers[n]);
    else{
      term=lim;
      t1=answers[lim];
      t2=answers[lim-1];
      while(term<n){
        current=((2*t1)+(2*t2))%mod;
        t2=t1;
        t1=current;
        term++;
      }
      cout<<current<<endl;
    }
  }  
  return 0;
}