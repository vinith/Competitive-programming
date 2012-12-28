#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
#include<deque>
using namespace std;
bool win(char c,char game[10][10]){
  bool ret=false;
  for(int i=0;i<3;i++){
    if(game[i][0]==c&&game[i][1]==c&&game[i][2]==c)ret=true;
    if(game[0][i]==c&&game[1][i]==c&&game[2][i]==c)ret=true;
  }
  if(game[0][0]==c&&game[1][1]==c&&game[2][2]==c)ret=true;
  else if(game[0][2]==c&&game[1][1]==c&&game[2][0]==c)ret=true;
  return ret;
}
int main(){
   //freopen("input.in","r",stdin);
   //freopen("output.out","w",stdout);
   int t;
   scanf("%d",&t);
   char game[10][10];
   bool xwin,owin;
   int xcount,ocount;
   while(t--){
     scanf("%s%s%s",game[0],game[1],game[2]);
     xcount=ocount=0;
     for(int i=0;i<3;i++)for(int k=0;k<3;k++){
       if(game[i][k]=='X')xcount++;
       else if(game[i][k]=='O')ocount++;
     }
     xwin=win('X',game);
     owin=win('O',game);
     if((xwin&&xcount-1!=ocount)||ocount>xcount||(xwin&&owin)||(xcount-ocount)>1||(owin&&ocount-xcount!=0))printf("no\n");
     else printf("yes\n");
   }
   return 0;
}
