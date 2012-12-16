using namespace std;
#include<iostream>
#include<cstdio>
#include<map>
int main(){
  int n;
  bool found=false;
  long long num1,num2,temp;
  map <long long,bool> val;
  map<long long,int> top;
  scanf("%d",&n);
  scanf("%lld",&num1);
  for(int i=1;i<n;i++){
    scanf("%lld",&num2);
    temp=num1^num2;
    num1=num2;
    if(val[temp]==true){
      if(top[temp]+1<i-1){
        found=true;break;
      }
    }else{
      val[temp]=true;
      top[temp]=i-1;
    }
  }
  if(found)printf("Yes\n");
  else printf("No\n");
}