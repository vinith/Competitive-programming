using namespace std;
#include<iostream>
#include<cstdio>
#include<map>
int main(){
  int n,x,y,z,num1,num2;
  scanf("%d",&n);
  int arr[n];
  int count=0;
  map<int,int> m1,m2;
  for(int i=0;i<n;i++)scanf("%d",&arr[i]);
  for(int i=0;i<n;i++)
    for(int k=0;k<n;k++)
      for(int r=0;r<n;r++){
        x=arr[i];y=arr[k];z=arr[r];
        m1[(x*y)+z]++;
        if(x!=0)
          m2[x*(y+z)]++;
      }
  map<int,int>::iterator s1,s2,e1,e2;
  s1=m1.begin();e1=m1.end();
  s2=m2.begin();e2=m2.end();
  //for(;s1!=e1;s1++)cout<<s1->first<<" "/*<<s1->second<<"  "*/;cout<<endl;
  //for(;s2!=e2;s2++)cout<<s2->first<<" "/*<<s2->second<<"   "*/;cout<<endl;
  //s1=m1.begin();s2=m2.begin();
  num1=s1->first;num2=s2->first;
  while((s1!=e1) && (s2!=e2)){
    //cout<<num1<<" "<<num2<<endl;
    if(num1>num2){
      s2++;
      num2=s2->first;
    }else if(num1==num2){
      count+=(s1->second*s2->second);
      s1++;s2++;
      num1=s1->first;num2=s2->first;
    }else{
      s1++;
      num1=s1->first;
    }
  }
  printf("%d\n",count);
  return 0;
}