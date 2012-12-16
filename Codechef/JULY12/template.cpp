using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#define mod 1000000007
typedef long long ull;
ull n;
ull ways[100000];
ull solve(ull current){
  ull t1,t2,temp;
  if(current>n)return 0;
  if(current==n)
    return 1L;
  else if(current<100000&&ways[current]!=0){
    //cout<<"used"<<endl;
    return ways[current];
  }
  else{
    t1=solve(current+1L)%mod;
    t2=solve(current+2L)%mod;
    t1=(t1*2);
    t2=(t2*2);
    temp=(t1+t2)%mod;
    if(current<100000)
      ways[current]=temp;
    return temp;
  }
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    memset(ways,0,sizeof(ways));
    scanf("%lld",&n);
    cout<<solve(1L)+solve(2L)<<endl;
  }
  return 0;
}