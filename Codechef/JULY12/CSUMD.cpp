using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#define mod 1000000007
typedef long long ull;
ull n;
ull ways[10000000];
ull solve(ull current){
  ull t1,t2,t3,t4,temp;
  if(current>n)return 0;
  if(current==n)
    return 1L;
  else if(current<10000000&&ways[current]!=0){
    //cout<<"used"<<endl;
    return ways[current];
  }
  else{
    t1=solve(current+1L)%mod;
    t2=solve(current+1L)%mod;
    t3=solve(current+2L)%mod;
    t4=solve(current+2L)%mod;
    temp=(t1+t2+t3+t4)%mod;
    if(current<10000000)
      ways[current]=temp;
    return temp;
  }
}
int main(){
  int t;
  scanf("%d",&t);
  ull answers[1000000];
  //while(t--){
    for(n=0;n<1000000000;n++){
      solve(1L)+solve(2L);
      //memset(ways,0,sizeof(ways));
    }
    //printf("%lld\n",solve(1L)+solve(2L));
  //}
  return 0;
}