using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
int target,n;
int coins[501][2];
map <int,map<int,int> > ans;
int solve(int curP,int curW){
  int temp,Min;
  if(curW>target)
    return 999999;
  else if(curW==target){
    return curP;
  }
  else if(ans[curP][curW]!=0){
    //cout<<"used"<<endl;
    return ans[curP][curW];
  }
  else{
    Min=solve(curP+coins[0][0],curW+coins[0][1]);
    for(int i=1;i<n;i++){
      temp=solve(curP+coins[i][0],curW+coins[i][1]);
      if(temp!=999999)
      Min=min(Min,temp);
    }
  }
  ans[curP][curW]=Min;
  return Min;
}
int main(){
  int t,empty,full,op;
  scanf("%d",&t);
  while(t--){
    ans.clear();
    scanf("%d %d",&empty,&full);
    target=full-empty;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d %d",&coins[i][0],&coins[i][1]);
    }
    op=solve(0,0);
    if(op==999999)printf("This is impossible.\n");
    else printf("The minimum amount of money in the piggy-bank is %d.\n",op);
  }
  return 0;
}