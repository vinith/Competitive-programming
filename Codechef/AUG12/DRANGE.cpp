#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;
int arr[1000001];
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
  for(int i=1;i<=n;i++)arr[i]=i;
}
/*inline int range(int n){
  int minn,maxx;
  minn=maxx=arr[1];
  for(int i=2;i<=n;i++){
    if(arr[i]>maxx)
      maxx=arr[i];
    if(arr[i]<minn)
      minn=arr[i];
  }
  return maxx-minn;
}*/
int main(){
  //cout<<(sizeof(arr)/1024)/1024;
  int t,m,n,temp,val;
  int w,x,y,z,minn,maxx;
  t=read();
  while(t--){
    n=read();m=read();
    fill(n);
    int poi[m*2+5],top=0;
    poi[top++]=1;
    poi[top++]=n;
    while(m--){
      w=read();x=read();y=read();z=read();
      if(w==1)val=z;
      else val=-z;
      for(int i=x;i<=y;i++){
        arr[i]+=val;
      }
      /*poi[top++]=x;
      poi[top++]=y;*/
    }
    //minn=maxx=arr[poi[0]];
    /*for(int i=1;i<top;i++){
      temp=arr[poi[i]];
      if(temp>maxx)maxx=temp;
      if(temp<minn)minn=temp;
    }
    printf("%d\n",maxx-minn);
    */
  }
  cout<<"It sucks to test timelimits like this by getting WA's, you guys";
  cout<<"should include a test and run feature in your site or upgrade servers";
  return 0;
}
