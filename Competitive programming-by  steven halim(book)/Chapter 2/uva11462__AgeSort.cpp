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
  int n,age,tp,mx;
  while(scanf("%d",&n)&&n^0){
    mx=-1;
    int arr[101]={0};
    for(int i=0;i<n;i++)scanf("%d",&age),arr[age]++,mx=max(age,mx);
    for(int i=1;i<=100;i++){
      tp=arr[i];
      for(int k=0;k<tp;k++)printf("%d%c",i,(mx==i&&k==tp-1)?'\n':' ');
    }
  }
  return 0;
}
