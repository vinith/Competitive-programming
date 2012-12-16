using namespace std;
#include<iostream>
#include<cstdio>
int n,k,cktime[100001],Min;
int cooked=0,chefCount=0;
int bestStart=0,bestFreq=0,currFreq,bestMin;
int minFreqInRange(int start,int end){
  Min=100001;int temp,freq=0;
  for(int i=start;i<=end;i++){
    temp=cktime[i];
    if(temp!=-1){
      Min=min(Min,temp);
    }
  }
  for(int i=start;i<=end;i++){
    temp=cktime[i];
    if(temp!=-1&&(temp==Min))freq++;
  }
  return freq;
}
void setCooked(int start,int end,int key){
  for(int i=start;i<=end;i++){
    if(cktime[i]==key){
      cktime[i]=-1;
      cooked++;
    }
  }
}
int main(){
  scanf("%d %d",&n,&k);
  int t=3;
  for(int i=0;i<n;i++)scanf("%d",&cktime[i]);
  k-=1;
  while(cooked<n){
    bestStart=0,bestFreq=0;
    chefCount++;
    for(int i=0;i+k<n;i++){
      currFreq=minFreqInRange(i,i+k);
      /**///if(chefCount==3){
        //printf("currFreq=%d start=%d\n",currFreq,i);
      //}
      if(currFreq>bestFreq){
        bestFreq=currFreq;
        bestStart=i;
        bestMin=Min;
      }
    }
    setCooked(bestStart,bestStart+k,bestMin);
    //printf("chef %d cooked now start=%d min=%d mealscooked=%d\n",chefCount,bestStart,bestMin,cooked);
    //for(int i=0;i<n;i++)cout<<cktime[i]<<" ";
    //cout<<endl;
  }
  printf("%d\n",chefCount);
  return 0;
}