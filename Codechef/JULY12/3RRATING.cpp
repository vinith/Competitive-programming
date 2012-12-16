//when n=3 set iterator to end and maintain its position
using namespace std;
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
int main(){
  int n,numCount=0,opr,temp;
  scanf("%d",&n);
  int current=0;long currentData;
  long val;
  multimap<long,bool> arr;
  multimap<long,bool>::iterator it;
  while(n--){
    scanf("%d",&opr);
    if(opr==1){
      numCount++;
      scanf("%ld",&val);
      arr.insert(pair<long,bool>(val,1));
      if(numCount==3){
        current=3;
        it=arr.end();
        it--;
        currentData=it->first;
      }else if(val<currentData){
        //cout<<"/"<<endl;
        current++;
      }
    }
    else{
      if(numCount<3)
        printf("No reviews yet\n");
      else{
        //current is the current position of iterator in the list
        temp=(numCount-(numCount/3))+1;
        //printf("current post:%d  current val:%ld: desired pos:%d \n",current,currentData,temp);
        if(current>temp)for(int i=temp;i<current;i++)it--;
        else if(current<temp)for(int i=current;i<temp;i++)it++;
        currentData=it->first;
        current=temp;
        printf("%ld\n",currentData);
      }
    }
    //if(numCount>2)
    //printf("current post:%d  current val:%ld\n",current,currentData);
  }
}