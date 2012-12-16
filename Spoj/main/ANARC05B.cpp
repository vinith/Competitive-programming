#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
  int n1,n2,s1,s2;
  int arr1[10001],arr2[10001];
  long sum1,sum2,total;
  while(scanf("%d",&n1) && n1!=0){
    for(int i=0;i<n1;i++)scanf("%d",&arr1[i]);
    scanf("%d",&n2);
    for(int i=0;i<n2;i++)scanf("%d",&arr2[i]);
    s1=s2=0;
    sum1=sum2=total=0L;
    while(s1<n1 && s2<n2){
      if(arr1[s1]<arr2[s2]){
        sum1+=arr1[s1];
        s1++;
      }else if(arr1[s1]>arr2[s2]){
        sum2+=arr2[s2];
        s2++;
      }else{
        sum1+=arr1[s1];
        sum2+=arr2[s2];
        total+=max(sum1,sum2);
        //printf("at %d sum1=%ld sum2=%ld total=%ld\n",arr1[s1],sum1,sum2,total);
        sum1=sum2=0L;
        s1++;
        s2++;
      }
    }
    if(s1<n1){
      while(s1<n1){
        sum1+=arr1[s1];
        s1++;
      }
    }else{
      while(s2<n2){
        sum2+=arr2[s2];
        s2++;
      }
    }
    total+=max(sum1,sum2);
    printf("%ld\n",total);
  }
  return 0;
}