using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
inline int read(){
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
int r,c;
int minrow[101],maxcolumn[101],temp;
bool found=false;
int gift[101][101];
int findMaxCol(int column){
  int temp=-1;
  for(int i=0;i<r;i++){
    if(temp<gift[i][column])
      temp=gift[i][column];
  }
  return temp;
}
int findMinRow(int row){
  int temp=100000001;
  for(int i=0;i<c;i++){
    if(temp>gift[row][i])
      temp=gift[row][i];
  }
  return temp;  
}
int main(){
  //memset(minrow,100000001,sizeof(minrow));
  memset(maxcolumn,-1,sizeof(maxcolumn));
  r=read();c=read();
  for(int i=0;i<r;i++)for(int k=0;k<c;k++)gift[i][k]=read();
    for(int i=0;i<r;i++){
      minrow[i]=temp=findMinRow(i);
      for(int x=0;x<c;x++){
        if(gift[i][x]==temp){//it is the min in the row check if column is max
          if(maxcolumn[x]==-1)
            maxcolumn[x]=findMaxCol(x);
        }
        if(temp==maxcolumn[x]){
          printf("%d\n",temp);
          found=true;goto flag;
        }
      }
    }
    flag:
    if(!found)printf("GUESS\n");
  return 0;
}
