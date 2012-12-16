#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
#include<cstring>
using namespace std;
int arr[1000001];
int opr[1000001][2];
void fill(int n){
  for(int i=1;i<=n;i++)arr[i]=i;
}
int range(int n){
  int minn,maxx;
  minn=maxx=arr[1];
  for(int i=2;i<=n;i++){
    if(arr[i]>maxx)
      maxx=arr[i];
    if(arr[i]<minn)
      minn=arr[i];
  }
  return maxx-minn;
}
void solve(int start,int end,int v){
  int x,y,z,val,temp;
  for(int i=start;i<=end;i++){
    if(opr[i][0]!=0){
      if(opr[i][0]>end){
        //resolve collisions
        solve(i,end,v+opr[i][1]);
        i=end+1;
        x=end+1;
        y=opr[i][0];
        val=opr[i][1];
        if(opr[x][0]!=0){
          // resolve  range collisions
          while(x<=y){
            if(opr[x][0]>y){
              temp=y;
              y=opr[x][0];
              opr[x][0]=temp;
              temp=opr[x][1];
              opr[x][1]=val;
              val=temp;
            }
            opr[x][1]+=val;
            x=opr[x][0]+1;
            if(opr[x][0]==0){
              opr[x][0]=y;
              break;
            }
          }
          if(x<=y)
            opr[x][1]+=val;
        }else{
          opr[x][0]=y;
          opr[x][1]=val;
        }
      }else{
        solve(i,opr[i][0],v+opr[i][1]);
        i=opr[i][0]+1;
      }
    }else{
      arr[i]+=v;
    }
  }
}
int main(){
  int t,m,n,temp;
  int w,x,y,z,val;
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&n,&m);
    fill(n);
    memset(opr,0,sizeof(opr));
    while(m--){
      scanf("%d %d %d %d",&w,&x,&y,&z);
      if(w==1)val=z;
      else val=-z;
      if(opr[x][0]!=0){
        // resolve  range collisions
        while(x<=y){
          if(opr[x][0]>y){
            temp=y;
            y=opr[x][0];
            opr[x][0]=temp;
            temp=opr[x][1];
            opr[x][1]=val;
            val=temp;
          }
          opr[x][1]+=val;
          x=opr[x][0]+1;
          if(opr[x][0]==0){
            opr[x][0]=y;
            break;
          }
        }
        if(x<=y)
          opr[x][1]+=val;
      }else{
        opr[x][0]=y;
        opr[x][1]=val;
      }
    }
    solve(1,n,0);
    for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
    cout<<endl;
    printf("%d\n",range(n));
  }
  return 0;
}