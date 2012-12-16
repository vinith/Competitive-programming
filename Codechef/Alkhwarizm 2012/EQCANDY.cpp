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
   int t,n,first,c;
   long long reserve,sum,min;
   scanf("%d",&t);
   int arr[10005];
   while(t--){
      scanf("%d",&n);
      scanf("%d",&arr[0]);
      first=arr[0];
      sum=first;
      min=first;
      reserve=0;
      for(int i=1;i<n;i++){
         scanf("%d",&c);
         if(c<min)min=c;
         if(c>min){
            reserve=c-min;
            arr[i]=min;
            sum+=arr[i];
         }else{
            if(min-c<=reserve){
               arr[i]=min;
               sum+=arr[i];
               reserve-=(min-c);
            }else {arr[i]=c;sum+=c;}
         }
      }
      while(1){
         if(sum/n>=first){
            printf("%d\n",first);
            break;
         }else first=sum/n;
      }
   }
   return 0;
}