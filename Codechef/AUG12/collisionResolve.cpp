#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int opr[1000][2];
  int x,y,val,temp;
  int n,m;
  scanf("%d %d",&n,&m);
  while(m--){
    scanf("%d %d %d",&x,&y,&val);
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
          //printf("swapped %d %d %d %d\n",opr[x][0],opr[x][1],y,val);
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
      //cout<<"---"<<x<<endl;
      opr[x][0]=y;
      opr[x][1]=val;
    }
    /*for(int i=1;i<=n;i++){
      cout<<opr[i][0]<<" "<<opr[i][1]<<"      ";
    }
    cout<<endl;
    */
  }
  for(int i=1;i<=n;i++){
    cout<<opr[i][0]<<" "<<opr[i][1]<<"      ";
  }
  cout<<endl;
  return 0;
}