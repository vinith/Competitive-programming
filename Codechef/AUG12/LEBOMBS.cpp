#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
  int t,n,count=0;
  char ar[1001];
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    count=0;
    scanf("%s",ar);
    for(int i=1;i<n-1;i++)
      if(ar[i]=='0' && ar[i-1]=='0' && ar[i+1] =='0')count++;
    if(ar[0]=='0' && ar[1]=='0')count++;
    if(ar[n-1]=='0'&&ar[n-2]=='0')count++;
    if(n==1 && ar[0]=='0')count=1;
    printf("%d\n",count);
  }
  return 0;
}