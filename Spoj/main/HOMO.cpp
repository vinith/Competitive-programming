using namespace std;
#include<iostream>
#include<cstdio>
#include<map>
int main(){
  int n;
  int homo,numCount,distinctCount;
  long k;
  char operation[15];
  homo=numCount=distinctCount=0;
  scanf("%d",&n);
  map<long,int> lst;
  while(n--){
    scanf("%s",operation);
    scanf("%ld",&k);
    if(operation[0]=='i'){
      lst[k]++;numCount++;
      if(lst[k]==1)distinctCount++;
      else if(lst[k]==2)homo++;
    }else if(lst[k]>0){
      lst[k]--;numCount--;
      if(lst[k]==0)distinctCount--;
      else if(lst[k]==1)homo--;
    }
    //printf("%ld(%d)  ",k,lst[k]);
    //cout<<homo<<" "<<distinctCount<<endl;
    if(numCount<2)
      printf("neither\n");
    else if(homo>0 && distinctCount>1)
      printf("both\n");
    else if(homo==0 && distinctCount>1)
      printf("hetero\n");
    else
      printf("homo\n");
  }
  return 0;
}