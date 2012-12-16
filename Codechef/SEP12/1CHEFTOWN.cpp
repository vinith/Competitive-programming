#include<iostream>
#include<cstdio>
#include<deque>
using namespace std;
int main(){
   int n,w,temp;
   int ans=0,current,curMax,curMin;
   deque<int> maxx,minn;
   scanf("%d %d",&n,&w);
   int arr[n];
   for(int i=0;i<w;i++){
      scanf("%d",&arr[i]);
      current=arr[i];
      if(maxx.empty())maxx.push_front(i);
      else{
         while(!maxx.empty() && arr[maxx.back()]<=current)maxx.pop_back();
         maxx.push_back(i);
      }
      if(minn.empty())minn.push_front(i);
      else{
         while(!minn.empty() && arr[minn.back()]>=current)minn.pop_back();
         minn.push_back(i);
      }
   }
   curMax=arr[maxx.front()];
   curMin=arr[minn.front()];
   //cout<<curMax<<" "<<curMin<<endl; 
   if((curMax-curMin+1)==w)ans++;
   for(int i=w;i<n;i++){
      scanf("%d",&arr[i]);
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
      //cout<<curMax<<" "<<curMin<<endl;
   }
   printf("%d\n",ans);
   return 0;
}