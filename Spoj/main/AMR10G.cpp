using namespace std;
#include<iostream>
#include<cstdio>
#include<algorithm>
int main(){
  int t,k,n;
  long arr[20001];
  long minDiff;
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&k,&n);
    n-=1;
    for(int i=0;i<k;i++)scanf("%ld",&arr[i]);
    sort(arr,arr+k);
    minDiff=arr[n]-arr[0];
    for(int i=1;i<k-n;i++)//cout<<i<<endl;
      minDiff=min(minDiff,arr[i+n]-arr[i]);
    printf("%ld\n",minDiff);
  }
  return 0;
}