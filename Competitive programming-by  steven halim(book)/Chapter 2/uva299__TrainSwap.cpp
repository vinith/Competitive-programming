#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
#include<deque>
using namespace std;

int main(){   
  int n,l,arr[55],count;
  scanf("%d",&n);
  while(n--){
    count=0;
    scanf("%d",&l);
    for(int i=0;i<l;i++)scanf("%d",&arr[i]);
    for(int i=0;i<l;i++){
      for(int k=1;k<l-i;k++){
        if(arr[k-1]>arr[k])swap(arr[k],arr[k-1]),count++;
      }
    }
    printf("Optimal train swapping takes %d swaps.\n",count);
  }
  return 0;
}
