//segment tree approach
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int tree[1000001*3][3];
bool lazy[1000001*3];
void build(int n,int b,int e){
  //builds min max segment tree
  if(b>e)return;
  lazy[n]=false;
  if (b==e){
    tree[n][0]=tree[n][1]=b;
    tree[n][2]=0;
    return;
  }
  build ( n*2 , b , (b+e)/2 );
  build (n*2+1, (b+e)/2 + 1 , e );
  tree[n][0]=b;
  tree[n][1]=e;
  tree[n][2]=0;
}
inline void update(int n,int b,int e,int i,int j,int val){
  //stores the update values to root of the segment
  if (b>e || b>j || e<i ) return;
  if(b>=i&&e<=j){
    tree[n][2]+=val;
    lazy[n]=true;
    return ;
  }
  lazy[n]=true; //one of the child nodes has a change
  update( n*2 , b , (b+e)/2 , i, j, val );
  update( n*2 + 1 , (b+e)/2 + 1 , e , i, j, val );
}
void query(int n,int b,int e,int val){
  //propogates the values to child nodes and re calculates min max
  if(b>e) return;
  if(b==e){
    tree[n][0]+=(val+tree[n][2]);
    tree[n][1]+=(val+tree[n][2]);
    return;
  }
  if(lazy[n]){//only if child nodes has a change proceed
    query( n*2 , b , (b+e)/2,val+tree[n][2]);
    query(n*2+1, (b+e)/2 + 1 , e,val+tree[n][2]);
    tree[n][0]=min(tree[n*2][0],tree[n*2+1][0]);
    tree[n][1]=max(tree[n*2][1],tree[n*2+1][1]);
  }
}
int main(){
  int t,m,n,temp;
  int w,x,y,z,val;
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&n,&m);
    build(1,1,n);
   while(m--){
      scanf("%d %d %d %d",&w,&x,&y,&z);
      if(w==2)val=-z;
      else val=z;
      update(1,1,n,x,y,val);
    }
    query(1,1,n,0);
    printf("%d\n",tree[1][1]-tree[1][0]);
  }
  return 0;
}