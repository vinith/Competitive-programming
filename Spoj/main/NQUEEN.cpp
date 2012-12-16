#include<iostream>
#include<cstdio>
#include<cstring>
int queens[60],n;
bool fixed[60],solved;
bool isAttacked(int row,int col){
  if(queens[row]!=0) // if row attacked return 0
    return true;
  else{
    for(int i=1;i<=n;i++)
      if(queens[i]==col) return true;
    for(int r=row,c=col;r>=1&&c>=1;r--,c--)
      if(queens[r]==c) return true;
    for(int r=row,c=col;r<=n&&c<=n;r++,c++)
      if(queens[r]==c) return true;
    for(int r=row,c=col;r<=n&&c>=1;r++,c--)
      if(queens[r]==c) return true;
    for(int r=row,c=col;r>=1&&c<=n;r--,c++)
      if(queens[r]==c) return true;
      
  }
  return false;
}
void solve(int row){
  if(row>n||solved)
    return;
  if(fixed[row])
    solve(row+1);
  else{
    //find the column that is safe and place queen there
    //printf("row : %d\n",row);
    for(int i=1;i<=n;i++){
      if(isAttacked(row,i)==false){
        //printf("col : %d\n",i);
        queens[row]=i;
        if(row==n){
          //solved, print solution
          for(int k=1;k<=n;k++)
            printf("%d ",queens[k]);
          putchar('\n');
          solved=true;
          return;
        }
        solve(row+1);
        if(solved)
          return;
        //backtrack
        //printf("backtrack row: %d\n",row);
        queens[row]=0;
      }
    }
  }
}
int main(){
  while(scanf("%d",&n)&&n!=0){
    memset(queens,0,sizeof(queens));
    memset(fixed,false,sizeof(fixed));
    solved=false;
    for(int i=1;i<=n;i++){
      scanf("%d",&queens[i]);
      if(queens[i]!=0)fixed[i]=true;
    }
    solve(1);
  }    
  return 0;
}