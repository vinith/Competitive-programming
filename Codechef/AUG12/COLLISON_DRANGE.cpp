#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
#include<cstring>
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
    opr[i][0]=opr[i][1]=0;
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
    if(opr[i][0]==0){
      arr[i]+=val;
    }else{
      if(opr[i][0]<=end){
        arr[i]+=(val+opr[i][1]);
        solve(i+1,opr[i][0],val+opr[i][1]);
        i=opr[i][0];
      }else{
        val+=opr[i][1];
        arr[i]+=val;
        int x=end+1,y=opr[i][0],z=opr[i][1];
        if(opr[x][0]==0){
          opr[x][0]=y;
          opr[x][1]=z;
        }else{
          if(opr[x][0]<y){
            temp=opr[x][0];
            opr[x][0]=y;
            y=temp;
            temp=opr[x][1];
            opr[x][1]=z;
            z=temp;
          }
          for(int i=x;i<=y;i++){
            if(opr[i][0]==0){
              opr[i][0]=y;
              opr[i][1]=z;
              break;
            }
            arr[i]+=z;
          }
        }
      }
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
    //memset(opr,0,sizeof(opr));
    while(m--){
      w=read();x=read();y=read();z=read();
      if(w==1)val=z;
      else val=-z;
      if(opr[x][0]==0){
        opr[x][0]=y;
        opr[x][1]=val;
      }else{
        if(opr[x][0]<y){
          temp=opr[x][0];
          opr[x][0]=y;
          y=temp;
          temp=opr[x][1];
          opr[x][1]=val;
          val=temp;
        }
        for(int i=x;i<=y;i++){
          if(opr[i][0]==0){
            opr[i][0]=y;
            opr[i][1]=val;
            break;
          }
          arr[i]+=val;
        }
      }
    }
    solve(0,n,0);
    printf("%d\n",range(n));
  }
  return 0;
}