using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<map>
int main()
{
  long a[500005]={0};
  map<long,bool> exists;
  long n,temp;
  a[0]=0;
  exists[0]=true;
  for(long i=1;i<=500000;i++){
   temp=a[i-1]-i;
   if(exists.find(temp)==exists.end()&&temp>0){
   a[i]=temp;
   exists[temp]=true;
  }
  else{
  temp=temp+i+i;
   a[i]=temp;
   exists[temp]=true;
  }
  }
  while(scanf("%ld",&n)&&n!=-1){
    printf("%ld\n",a[n]);
  }
  return 0;
}