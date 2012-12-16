using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
int main(){
  int t,n;
  int val,shift,k;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    int order[n],initial[n];
    for(int i=0;i<n;i++){
      scanf("%d",&order[i]);
      initial[i]=i+1;
    }
    for(int i=1;i<n;i++){
      val=i+1; //==initial[i]
      k=i-1;
      shift=order[i];
      while(shift--){
        initial[k+1]=initial[k];
        k--;
      }
      initial[k+1]=val;
    }
    for(int i=0;i<n;i++)printf("%d ",initial[i]);
    putchar('\n');
  }
  return 0;
}