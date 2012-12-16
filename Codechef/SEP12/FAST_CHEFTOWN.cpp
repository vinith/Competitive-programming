#include<iostream>
#include<cstdio>
#include<deque>
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
   int n,w,temp;
   int ans=0,current,curMax,curMin;
   deque<int> maxx,minn;
   n=read(); w=read();
   int arr[n];
   for(int i=0;i<w;i++){
      arr[i]=read();
      current=arr[i];
      while(!maxx.empty() && arr[maxx.back()]<=current)maxx.pop_back();
      maxx.push_back(i);
      while(!minn.empty() && arr[minn.back()]>=current)minn.pop_back();
      minn.push_back(i);
   }
   curMax=arr[maxx.front()];
   curMin=arr[minn.front()];
   if((curMax-curMin+1)==w)ans++;
   for(int i=w;i<n;i++){
      arr[i]=read();
      current=arr[i];
      if(maxx.front()<=i-w)maxx.pop_front();
      if(minn.front()<=i-w)minn.pop_front();
      while(!maxx.empty() && arr[maxx.back()]<=current)maxx.pop_back();
      maxx.push_back(i);
      while(!minn.empty() && arr[minn.back()]>=current)minn.pop_back();
      minn.push_back(i);
      curMax=arr[maxx.front()];
      curMin=arr[minn.front()];
      if((curMax-curMin+1)==w)ans++;
   }
   printf("%d\n",ans);
   return 0;
}