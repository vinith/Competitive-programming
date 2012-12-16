#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

int main(){
   int t,n,count;
   int arr[10001];
   scanf("%d",&t);
   while(t--){
      scanf("%d",&n);
      scanf("%d",&arr[0]);
      count=1;
      for(int i=1;i<n;i++){
         scanf("%d",&arr[i]);
         if(arr[i]>arr[i-1])arr[i]=arr[i-1];
         else count++;
      }
      printf("%d\n",count);
   }
   return 0;
}