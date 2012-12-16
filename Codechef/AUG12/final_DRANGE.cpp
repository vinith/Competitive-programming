#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;
int arr[1000010];
inline int read()
{
  char temp;
  int x=0;
  temp=getchar_unlocked();
  while(temp<48)temp=getchar_unlocked();
  x+=(temp-'0');
  temp=getchar_unlocked();
  while(temp>=48){
    x=(x<<3)+(x<<1);
    x+=(temp-'0');
    temp=getchar_unlocked();
  }
  return x;
  
}
inline void fill(int n){
  for(int i=1;i<=n;i++)arr[i]=1;
}
inline int ans(int n){
  int minn,maxx;
  minn=maxx=arr[1];
  for(int i=2;i<=n;i++){
    arr[i]+=arr[i-1];
    minn=min(minn,arr[i]);
    maxx=max(maxx,arr[i]);
  }
  return maxx-minn;
}
int main(){
  int t,m,n,val;
  int w,x,y,z;
  t=read();
  while(t--){
    n=read();m=read();
    fill(n);
    while(m--){
      w=read();x=read();y=read();z=read();
      if(w==1)val=z;
      else val=-z;
      arr[x]+=val;
      arr[y+1]-=val;
    }
    printf("%d\n",ans(n));
  }
  return 0;
}
