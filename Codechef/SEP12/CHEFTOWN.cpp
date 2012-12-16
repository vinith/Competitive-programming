#include<iostream>
#include<cstdio>
using namespace std;
bool arr[400001]={false};
int n,w;
inline int findNext(int start){
   int i;
   for(i=start;i<=n&&arr[i]==false;i++);
   return i;
}
int main(){
   int temp;
   int ans=0,continuous=1;
   scanf("%d %d",&n,&w);
   for(int i=0;i<n;i++){
      scanf("%d",&temp);
      arr[temp]=true;
   }
   temp=findNext(0)+1;
   cout<<temp-1<<" ";
   for(int i=temp;i<n;i++){
      if(arr[i]){
         continuous++;
         cout<<i<<" ";
      }else if(continuous>=w){
         cout<<continuous<<"-"<<endl;;
         ans+=(1+(continuous-w));
         i=findNext(i);
         cout<<i<<" ";
         continuous=1;
      }else{
         i=findNext(i);
         continuous=1;
      }
   }
   cout<<endl;
   if(arr[n])continuous++;
   if(continuous>=w)ans+=(1+(continuous-w));
   printf("%d\n",ans);
}
