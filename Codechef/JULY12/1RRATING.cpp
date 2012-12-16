using namespace std;
#include<iostream>
#include<cstdio>
inline void swap(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
int partition(int arr[],int start,int end,int pivotIndex){
  int pivot,store;
  pivot=arr[pivotIndex];
  store=start;
  if(start<end){
    swap(arr[pivotIndex],arr[end]);
    for(int i=start;i<end;i++){
      if(arr[i]<pivot){
        swap(arr[i],arr[store]);
        store++;
      }
    }
    swap(arr[end],arr[store]);
  }
  return store;
}
int select(int arr[],int start,int end,int k){
  if(left==right)
    return arr[start];
  int pivotIndex=(start+end)/2;
  int pivotDist=pivotIndex-start+1;
  if(pivotIndex==k)
    return arr[pivotIndex];
  else if (k<pivotIndex)
    return select(arr,start,pivotIndex-1,k);
  else
    return select(arr,pivotIndex+1,end,k-pivotIndex);
}
int main(){
  int n,k;
  scanf("%d %d",&n,&k);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  cout<<select(arr,0,n-1,k);
  return 0;
}