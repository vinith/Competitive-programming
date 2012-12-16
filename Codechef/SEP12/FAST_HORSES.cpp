#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
inline int read()
{
   char temp;
   int x=0;
   temp=getchar_unlocked();
   while(temp<48)temp=getchar_unlocked();
   x+=(temp-'0');
   temp=getchar_unlocked();
   while(temp>=48){
      x=x*10;
      x+=(temp-'0');
      temp=getchar_unlocked();
   }
   return x; 
}
int main(){
   int t,n,minDiff;
   t=read();
   while(t--){
      n=read();
      int arr[n];
      for(int i=0;i<n;i++)arr[i]=read();
      sort(arr,arr+n);
      minDiff=arr[1]-arr[0];
      for(int i=2;i<n;i++)minDiff=min(minDiff,arr[i]-arr[i-1]);
      printf("%d\n",minDiff);
   }
   return 0;
}