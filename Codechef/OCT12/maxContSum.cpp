#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;
void mcsum(int *arr,int n){
   int best,current,start,curStart,end;
   best=curStart=start=end=current=0;
   for(int i=0;i<n;i++){
      current+=arr[i];
      if(current<0){
         current=0;
         curStart=i+1;
      }
      if(best<current){
         best=current;
         end=i;
         start=curStart;
      }
   }
   cout<<"max sum: "<<best<<"start :"<<start<<"end: "<<end<<endl;
}
int main(){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)cin>>arr[i];
      mcsum(arr,n);
   return 0;
}
