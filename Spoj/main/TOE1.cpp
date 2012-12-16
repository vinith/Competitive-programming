using namespace std;
#include<iostream>
#include<cstdio>
int main(){
  int n,xCount,oCount;
  bool xWin,oWin;
  char grid[10][10],temp;
  scanf("%d",&n);
  while(n--){
    xCount=oCount=0;
    xWin=oWin=false;
    for(int i=0;i<3;i++)
      scanf("%s",grid[i]);
    for(int i=0;i<3;i++)for(int k=0;k<3;k++){
      temp=grid[i][k];
      if(temp=='X'||temp=='x')xCount++;
      else if(temp=='O'||temp=='o')oCount++;
    }
    //cout<<oCount<<" "<<xCount<<endl;
    if(oCount>xCount||(xCount-oCount)>1)printf("no\n");
    else{
      for(int i=0;i<3;i++){
        if((grid[i][0]==grid[i][1])&&(grid[i][1]==grid[i][2])){
          if(grid[i][0]=='O'||grid[i][0]=='o')oWin=true;
          else if(grid[i][0]=='X'||grid[i][0]=='x') xWin=true;
        }
        if((grid[0][i]==grid[1][i])&&(grid[1][i]==grid[2][i])){
          if(grid[0][i]=='O'||grid[0][i]=='o')oWin=true;
          else if(grid[0][i]=='X'||grid[0][i]=='x') xWin=true;
        }
      }
      if(grid[0][0]==grid[1][1] && grid[1][1]==grid[2][2]){
        if(grid[0][0]=='O'||grid[0][0]=='o')oWin=true;
        else if(grid[0][0]=='X'||grid[0][0]=='x') xWin=true;
      }
      if(grid[0][2]==grid[1][1] && grid[1][1]==grid[2][0]){
        if(grid[0][2]=='O'||grid[0][2]=='o')oWin=true;
        else if(grid[0][2]=='X'||grid[0][2]=='x') xWin=true;
      }
      //cout<<xWin<<" "<<oWin<<endl;
      if((xWin==oWin) && (xWin==true))printf("no\n");
      else if((xWin==true) && (xCount-1==oCount))printf("yes\n");
      else if((oWin==true) && (oCount==xCount))printf("yes\n");
      else if((xWin==false) && (oWin==false))printf("yes\n");
      else printf("no\n");
    }
  }  
  return 0;
}