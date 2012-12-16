//segment tree approach
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int arr[1000001];
int tree[1000001*3][3];
void fill(int n){
  for(int i=1;i<=n;i++)arr[i]=i;
}
int mx;
void build(int n,int b,int e){
  //builds min max segment tree
  mx=max(mx,n);
  if(b>e)return;
  if (b==e){
    tree[n][0]=tree[n][1]=b;
    return;
  }
  build ( n*2 , b , (b+e)/2 );
  build (n*2+1, (b+e)/2 + 1 , e );
  tree[n][0]=b;
  tree[n][1]=e;
}
void update(int n,int b,int e,int i,int j,int val){
  //stores the update values to root of the segment
  if (b>e || b>j || e<i ) return;
  //cout<<b<<" "<<e<<endl;
  if(b>=i&&e<=j){
    //cout<<"updated "<<b<<" "<<e<<endl;
    tree[n][2]+=val;
    return ;
  }
  update( n*2 , b , (b+e)/2 , i, j, val );
  update( n*2 + 1 , (b+e)/2 + 1 , e , i, j, val );
}
void query(int n,int b,int e,int val){
  //propogates the values to child nodes and re calculates min max
  if(b>e) return;
  //cout<<b<<" "<<e<<" "<<val+tree[n][2]<<"   ";
  if(b==e){
    //cout<<b<<" --->"<<tree[n][0]<<endl;
    tree[n][0]+=(val+tree[n][2]);
    tree[n][1]+=(val+tree[n][2]);
    return;
  }
  query( n*2 , b , (b+e)/2,val+tree[n][2]);
  query(n*2+1, (b+e)/2 + 1 , e,val+tree[n][2]);
  tree[n][0]=min(tree[n*2][0],tree[n*2+1][0]);
  tree[n][1]=max(tree[n*2][1],tree[n*2+1][1]);
}
int main(){
  int t,m,n,temp;
  int w,x,y,z,val;
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&n,&m);
    fill(n);
    memset(tree,0,sizeof(tree));
    build(1,1,n);
    cout<<mx<<endl;
   //while(m--){
      //scanf("%d %d %d %d",&w,&x,&y,&z);
      update(1,1,10,3,6,-4);
      update(1,1,10,5,9,1);
      for(int i=1;i<=15;i++)printf("%d %d %d   ",tree[i][0],tree[i][1],tree[i][2]);
      cout<<endl;
      query(1,1,10,0);
      cout<<endl<<endl;
      for(int i=1;i<=13;i++)printf("%d %d %d   ",tree[i][0],tree[i][1],tree[i][2]);
      cout<<endl;
    //}
  }
  return 0;
}
