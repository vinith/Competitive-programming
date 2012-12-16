using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
int menu[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
long solve(long current,long count,long target){
  if(current==target)
    return count;
  else{
    for(int i=11;i>=0;i--){
      if(menu[i]+current<=target)
        return solve(current+menu[i],count+1,target);
    }
  }
}
int main(){
  int t,p;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&p);
    printf("%ld\n",solve(0,0,p));
  }
  return 0;
}