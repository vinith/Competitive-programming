//segment tree approach
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define lim 2097159
int maxar[lim];
int minar[lim];
int valar[lim];
int i,j,val;
int read()
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
void update(int n,int b,int e){
  //stores the update values to root of the segment
  if (b>e || b>j || e<i ) return;
  if(b>=i&&e<=j){
    valar[n]+=val;
    return ;
  }
  update(n*2,b,(b+e)/2);
  update(n*2+1,(b+e)/2+1,e);
}
void query(int n,int b,int e,int val){
  //propogates the values to child nodes and re calculates min max
  if(b>e) return;
  if(b==e){
    minar[n]+=(val+valar[n]+b);
    maxar[n]+=(val+valar[n]+b);
    return;
  }
  query(n*2,b,(b+e)/2,val+valar[n]);
  query(n*2+1,(b+e)/2+1,e,val+valar[n]);
  minar[n]=min(minar[n*2],minar[n*2+1]);
  maxar[n]=max(maxar[n*2],maxar[n*2+1]);
}
int main(){
  int t,m,n,temp;
  int w,x,y,z;
  t=read();
  while(t--){
    n=read();m=read();
    while(m--){
      w=read();x=read();y=read();z=read();
      if(w==2)val=-z;
      else val=z;
      i=x;j=y;
      update(1,1,n);
    }
    query(1,1,n,0);
    printf("%d\n",maxar[1]-minar[1]);
    memset(minar,0,sizeof(minar));
    memset(maxar,0,sizeof(maxar));
    memset(valar,0,sizeof(valar));
  }
  return 0;
}