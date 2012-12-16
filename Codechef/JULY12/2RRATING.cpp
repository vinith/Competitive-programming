using namespace std;
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
int main(){
  int n,numCount=0,opr,temp;
  scanf("%d",&n);
  long val;
  multimap<long,bool> arr;
  multimap<long,bool>::iterator it;
  while(n--){
    scanf("%d",&opr);
    if(opr==1){
      numCount++;
      scanf("%ld",&val);
      arr.insert(pair<long,bool>(val,1));
    }
    else{
      if(numCount<3)
        printf("No reviews yet\n");
      else{
        temp=numCount-(numCount/3);
        it=arr.begin();
        std::advance(it,temp);
        printf("%ld\n",it->first);
      }
    }
  }
}