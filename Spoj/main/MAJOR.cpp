using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
int main(){
  int t,n,start=0,half,ans,freq,num;
  int arr[100001];
  bool success;
  scanf("%d",&t);
  while(t--){
    success=false;
    scanf("%d",&n);
    half=n/2;
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    sort(arr,arr+n);
    start=0;
    while(start<n){
      num=arr[start];
      start++;
      freq=1;
      while(start<n &&arr[start]==num){
        start++; freq++;
      }
      if(freq>half){
        success=true;
        ans=num;
        break;
      }
    }
    if(success)printf("YES %d\n",ans);
    else printf("NO\n");
  }  
  return 0;
}