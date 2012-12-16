using namespace std;
#include<iostream>
#include<cstdio>
#include<algorithm>
inline int read(){
  char temp;
  int x=0;
  temp=getchar_unlocked();
  while(temp<48)temp=getchar_unlocked();
  x+=(temp-'0');
  temp=getchar_unlocked();
  while(temp>=48){
    x=(x<<3)+(x<<1);
    x+=(temp-'0');
    temp=getchar_unlocked();
  }
  return x; 
}
int main(){
  int t,n,start;
  bool flag;
  t=read();
  while(t--){
    flag=false;
    start=0;
    n=read();
    int arr[n];
    for(int i=0;i<n;i++)arr[i]=read();
    sort(arr,arr+n);
    while(start<n&&arr[start]==1){
      printf("1 ");
      start++;
    }
    if(start+1==n-1 && arr[start]==2&&arr[start+1]==3){
      flag=true;
      start+=2;
    }
    for(int i=n-1;i>=start;i--)printf("%d ",arr[i]);
    if(flag)printf("2 3");
    putchar('\n');
  }
  return 0;
}