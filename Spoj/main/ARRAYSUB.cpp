#include<iostream>
#include<cstdio>
#include<map>
#include<deque>
using namespace std;
int main(){
  int n,k;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)scanf("%d",&arr[i]);
  scanf("%d",&k);
  deque<int> max;
  for(int i=0;i<k;i++){
    if(max.empty())
      max.push_front(i);
    else{
      while(!max.empty() && arr[max.back()]<=arr[i])
        max.pop_back();
      max.push_back(i);
    }
  }
  printf("%d ",arr[max.front()]);
  //cout<<arr[max.front()]<<" "<<arr[max.back()]<<endl;
  for(int i=k;i<n;i++){
    //cout<<"i="<<i<<endl;
    if(max.front()<=i-k){
      max.pop_front();
    }
    while(!max.empty() && arr[max.back()]<=arr[i])
      max.pop_back();
    max.push_back(i);
  printf("%d ",arr[max.front()]);
  }
  putchar('\n');
  return 0;
}