using namespace std;
#include<iostream>
#include<cstdio>
#include<map>
long xd,yd;
map<int,map<int,bool> > used;
bool solve(long x,long y){
  if(x==xd||y==yd)
    return true;
  else if(used[x][y]==true)
    return false;
  else{
    used[x][y]=true;
    return solve(y,x)||solve(x,-y)||solve(x+y,y)||solve(2*x,y);
  }
}
int main(){
  int t;
  long xs,ys;
  scanf("%d",&t);
  while(t--){
    scanf("%ld %ld %ld %ld",&xs,&ys,&xd,&yd);
    if(solve(xs,ys))printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}