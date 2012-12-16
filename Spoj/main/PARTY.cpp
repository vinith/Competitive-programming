#include<iostream>
#include<cstdio>

int main(){
  int maxw,n,temp;
  int weights[11]={0},value[11]={0},cost=0;
  scanf("%d %d",&maxw,&n);
  int ans[101][501]={0};
  for(int i=0;i<n;i++)scanf("%d %d",&weights[i],&value[i]);
  for(int i=1;i<n;i++){
    for(int w=1;w<=maxw;w++){
      if(weights[i]<=w){
        temp=value[i]+ans[i-1][w-weights[i]];
        if(temp>ans[i-1][w]){
          ans[i][w]=temp;
        }
        else ans[i][w]=ans[i-1][w];
      }else
        ans[i][w]=ans[i-1][w];
    }
  }
  printf("%d %d\n",cost,ans[n-1][maxw]);
  return 0;
}