using namespace std;
#include<iostream>
#include<cstdio>
#include<algorithm>
long arr[250000];
void insertionSort(long *arr,int start,int l){
  int k;
  long key;
  for(int i=start+1;i<=l;i++){
    key=arr[i];
    k=i-1;
    while(k>start-1&&arr[k]>key){
      arr[k+1]=arr[k];
      k--;
    }
    arr[k+1]=key;
  }
  
}
int main(){
  int n,numCount=0,opr;
  scanf("%d",&n);
  while(n--){
    scanf("%d",&opr);
    if(opr==1){
      scanf("%ld",&arr[numCount++]);
      insertionSort(arr,numCount/3,numCount-1);
    }
    else{
      if(numCount<3)
        printf("No reviews yet\n");
      else{
        printf("%ld\n",arr[numCount-(numCount/3)]);
      }
    }
  }
}