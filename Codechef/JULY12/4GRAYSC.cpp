using namespace std;
#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
int main(){
  int n,tops;
  bool found=false;
  long long num1,num2,temp;
  map <long long,bool> val;
  map<long long,int> top;
  map<long long,map<int,int> > keY;
  scanf("%d",&n);
  long long arr[n];
  for(int i=0;i<n;i++){
    scanf("%lld",&arr[i]);
  }
  //sort(arr,arr+n);
  //for(int i=0;i<n;i++){
    //printf("%lld ",arr[i]);
  //}
  //cout<<endl;
  for(int i=0;i+1<n;i++){
    num1=arr[i];
    num2=arr[i+1];
    temp=num1^num2;
    if(val[temp]==true){
      tops=top[temp];
      for(int k=0;k<tops;k++){
        if(i>keY[temp][k]+1){
          found=true;goto op;
        }
      }
      keY[temp][top[temp]++]=i;
    }else{
      val[temp]=true;
      top[temp]=0;
      keY[temp][top[temp]++]=i; //i and i+1 contribute to xor(temp)
    }
  }
  op:
  if(found)printf("Yes\n");
  else printf("No\n");
}