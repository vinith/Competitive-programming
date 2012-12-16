#include<stdio.h>
#include<string.h>
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
int minrow,maxcolumn[101]={0},temp;
int found=0;
int gift[101][101];
int findMaxCol(int column){
  int i;
  temp=-1;
  for(i=0;i<r;i++){
    if(temp<gift[i][column])
      temp=gift[i][column];
  }
  return temp;
}
int findMinRow(int row){
  int i;
  temp=100000001;
  for(i=0;i<c;i++){
    if(temp>gift[row][i])
      temp=gift[row][i];
  }
  return temp;  
}
int main(){
  int i,x,k;
  scanf("%d %d",&r,&c);
  for(i=0;i<r;i++)for(k=0;k<c;k++)gift[i][k]=read();
    for(i=0;i<r;i++){
      minrow=findMinRow(i);
      for(x=0;x<c;x++){
        if(gift[i][x]==minrow){
          if(maxcolumn[x]==0)
            maxcolumn[x]=findMaxCol(x);
        }
        if(minrow==maxcolumn[x]){
          printf("%d\n",minrow);
          found=1;goto flag;
        }
      }
    }
    flag:
    if(!found)printf("GUESS\n");
  return 0;
}