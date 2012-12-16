//segment tree approach
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define lim 2097159
int tree[lim][3];
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
    tree[n][2]+=val;
    return ;
  }
  update(n*2,b,(b+e)/2);
  update(n*2+1,(b+e)/2+1,e);
}
void query(int n,int b,int e,int val){
  //propogates the values to child nodes and re calculates min max
  if(b>e) return;
  if(b==e){
    tree[n][0]+=(val+tree[n][2]+b);
    tree[n][1]+=(val+tree[n][2]+b);
    return;
  }
  query(n*2,b,(b+e)/2,val+tree[n][2]);
  query(n*2+1,(b+e)/2+1,e,val+tree[n][2]);
  tree[n][0]=min(tree[n*2][0],tree[n*2+1][0]);
  tree[n][1]=max(tree[n*2][1],tree[n*2+1][1]);
}
int main(){
  int t,m,n,temp;
  int w,x,y,z;
  t=read();
  while(t--){
    n=read();m=read();
    for(int k=0;k<lim;k++){tree[k][0]=tree[k][1]=tree[k][2]=0;}
    while(m--){
      w=read();x=read();y=read();z=read();
      if(w==2)val=-z;
      else val=z;
      i=x;j=y;
      update(1,1,n);
    }
    query(1,1,n,0);
    printf("%d\n",tree[1][1]-tree[1][0]);
  }
  return 0;
}