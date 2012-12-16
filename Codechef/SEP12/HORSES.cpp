#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
   int t,n,minDiff;
   scanf("%d",&t);
   while(t--){
      scanf("%d",&n);
      int arr[n];
      for(int i=0;i<n;i++)scanf("%d",&arr[i]);
      sort(arr,arr+n);
      minDiff=arr[1]-arr[0];
      for(int i=2;i<n;i++)minDiff=min(minDiff,arr[i]-arr[i-1]);
      printf("%d\n",minDiff);
   }
   return 0;
}