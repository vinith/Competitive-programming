using namespace std;
#include<iostream>
#include<cstdio>
#include<map>

int main(){
  int n,k,num;
  int count=0;
  map <int,bool> nums;
  map<int,bool>::iterator it,en;
  scanf("%d %d",&n,&k);
  for(int i=0;i<n;i++){
    scanf("%d",&num);
    nums[num]=true;
  }
  en=nums.end();
  for(it=nums.begin();it!=en;it++){
    if(nums.find((it->first)+(k))!=en)count++;
  }
  printf("%d\n",count);
  return 0;
}