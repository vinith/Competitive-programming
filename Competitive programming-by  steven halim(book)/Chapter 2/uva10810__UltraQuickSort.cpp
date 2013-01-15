#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
#include<deque>
using namespace std;

unsigned long long invcnt;

void merge(int start,int end,int *arr){
  int newarr[end-start+2],mid=(start+end)/2;
  int top=0,top1=start,top2=mid+1;
  while(top1<=mid&&top2<=end){
    if(arr[top1]>arr[top2]){
      invcnt+=(mid-top1+1);
      newarr[top++]=arr[top2++];
    }
    else
      newarr[top++]=arr[top1++];
  }
  while(top1<=mid)newarr[top++]=arr[top1++];
  while(top2<=end)newarr[top++]=arr[top2++];
  for(int i=start;i<=end;i++)arr[i]=newarr[i-start];
}

void split(int start,int end,int *arr){
  if(start<end){
    int mid=(start+end)/2;
    split(start,mid,arr);
    split(mid+1,end,arr);
    merge(start,end,arr);
  }
}

void mergeSort(int *arr,int n){
  split(0,n-1,arr);
}

int main(){
  int n;
  int arr[500001];
  while(scanf("%d",&n)&&n!=0){
    invcnt=0;
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    mergeSort(arr,n);
    //for(int i=0;i<n;i++)printf("%d%c",arr[i],i==n-1?'\n':' ');
    printf("%llu\n",invcnt);
  }
  return 0;
}
