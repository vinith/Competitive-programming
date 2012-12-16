using namespace std;
#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
#define len 1000000
int main(){
  int n,x,y,z,temp,num1,num2,freq1,freq2;
  scanf("%d",&n);
  int arr[n];
  long count=0;
  int m1[len]={0},m2[len]={0},top1,top2,start1,start2;;
  top1=top2=start1=start2=0;
  for(int i=0;i<n;i++)scanf("%d",&arr[i]);
  for(int i=0;i<n;i++)
    for(int k=0;k<n;k++)
      for(int r=0;r<n;r++){
        x=arr[i];y=arr[k];z=arr[r];
        temp=(x*y)+z;
        m1[top1++]=temp;
        if(x!=0){
          temp=x*(y+z);
          m2[top2++]=temp;
        }
      }
  sort(m1,m1+top1);sort(m2,m2+top2);
  while(start1<top1 && start2<top2){
    num1=m1[start1];num2=m2[start2];
    if(num1>num2)
      start2++;
    else if(num1<num2)
      start1++;
    else{
      freq1=freq2=1;
      start1++;start2++;
      while(start1<top1 && m1[start1]==num1){
        start1++;freq1++;
      }
      while(start2<top2 && m2[start2]==num1){
        start2++;freq2++;
      }
      count+=(freq1*freq2);
    }
  }
  printf("%ld\n",count);
  return 0;
}