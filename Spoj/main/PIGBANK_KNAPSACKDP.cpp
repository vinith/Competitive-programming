using namespace std;
#include<iostream>
#include<cstdio>
#define INFINITY 999999
int answer[10001];
int minKnapsack(int values[],int weights[],int n,int maxWeight){
  for(int i=1;i<=maxWeight;i++){
    answer[i]=INFINITY;
    for(int k=0;k<n;k++){
      if(i>=weights[k])
        answer[i]=min(answer[i],answer[i-weights[k]]+values[k]);
    } 
  }
  return answer[maxWeight];
}
int main(){
  int t,empty,filled,n,ans;
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&empty,&filled);
    scanf("%d",&n);
    int values[n],weights[n];
    for(int i=0;i<n;i++)scanf("%d %d",&values[i],&weights[i]);
    //for(int i=0;i<n;i++)scanf("%d %d",&values[i],&weights[i]);
    ans=minKnapsack(values,weights,n,filled-empty);
    if(ans==INFINITY)
      printf("This is impossible.\n");
    else printf("The minimum amount of money in the piggy-bank is %d.\n",ans);
  }
  return 0;
}