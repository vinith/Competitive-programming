#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int solve(int full,int borrow){
  int drank=0,total=full+borrow,empty=borrow;
  while(total>2){
    drank+=full;
    empty+=full;
    full=0;
    if(empty>2){
      empty-=3;
      full++;
      total-=2;
    }
  }
  drank+=full;
  empty+=full;
  if(empty>=borrow)return drank;
  else return -1;
}
int main(){
  int n;
  while(scanf("%d",&n)>0){
    printf("%d\n",max(max(solve(n,0),solve(n,1)),solve(n,2)));
  }
  return 0;
}
