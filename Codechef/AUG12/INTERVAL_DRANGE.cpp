#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;
int arr[1000001];
int opr[1000001][2];
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
  for(int i=1;i<=n;i++){
    arr[i]=i;
  }
}
inline int range(int n){
  int minn,maxx;
  //cout<<arr[1]<<" ";
  for(int i=2;i<=n;i++){
    if(arr[i]>maxx)
      maxx=arr[i];
    if(arr[i]<minn)
      minn=arr[i];
    //cout<<arr[i]<<" ";
  }
  //cout<<endl;
  return maxx-minn;
}
void solve(int start,int end,int val){
  int temp;
  for(int i=start;i<=end;i++){
    temp=opr[i][0];
    if(temp!=0){
      if(temp>end){
        if(opr[end+1]==0){
          opr[end+1][0]=temp;
          opr[end+1][1]=opr[i][1];
          val+=opr[i][1];
        }else{
          for(int k=i;k<=end;k++)arr[i]+=val;
          val=0;
        }
      }else{
        arr[i]+=(val+opr[i][1]);
        solve(i+1,opr[i][0],val+opr[i][1]);
        i=temp;
      }
    }else{
      arr[i]+=val;
    }
  }
}
int main(){
  int t,m,n,temp,val,tval;
  int w,x,y,z;
  t=read();
  while(t--){
    n=read();m=read();
    fill(n);
    while(m--){
      w=read();x=read();y=read();z=read();
      if(opr[x][0]!=0){
        for(int i=x;i<=y;i++)arr[i]+=z;
      }else{
        opr[x][0]=y;
        opr[x][1]=z;
      }
    }
    solve(1,n,0);
    printf("%d\n",range(n));
  }
  return 0;
}