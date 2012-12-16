using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
int r,c;
long minrow[101],maxcolumn[101],temp;
bool found=false;
long gift[101][101];
long findMaxCol(int column){
  long temp=-1;
  for(int i=0;i<r;i++){
    if(temp<gift[i][column])
      temp=gift[i][column];
  }
  return temp;
}
long findMinRow(int row){
  long temp=100000001;
  for(int i=0;i<c;i++){
    if(temp>gift[row][i])
      temp=gift[row][i];
  }
  return temp;  
}
int main(){
  //memset(minrow,100000001,sizeof(minrow));
  memset(maxcolumn,-1,sizeof(maxcolumn));
  scanf("%d %d",&r,&c);
  for(int i=0;i<r;i++)for(int k=0;k<c;k++)scanf("%ld",&gift[i][k]);
    for(int i=0;i<r;i++){
      minrow[i]=temp=findMinRow(i);
      for(int x=0;x<c;x++){
        if(gift[i][x]==temp){//it is the min in the row check if column is max
          if(maxcolumn[x]==-1)
            maxcolumn[x]=findMaxCol(x);
        }
        if(temp==maxcolumn[x]){
          printf("%ld\n",temp);
          found=true;goto flag;
        }
      }
    }
    flag:
    if(!found)printf("GUESS\n");
  return 0;
}