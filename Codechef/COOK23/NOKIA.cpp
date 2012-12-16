using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
long findMin(long left,long current,long right){
  if(left>=right)
    return 0;
  else{
    long tcur1=(left+current);
    long tcur2=(right+current);
    long ans=0;
    //cout<<current<<endl;
    if(current==left)ans+=1;
    else if(current>left)ans+=(current-left+1);
    if(current==right)ans+=1;
    else if(current<right)ans+=(right-current+1);
    ans+=(left,tcur1/2,current);
    if(tcur2%2!=0)
      ans+=(current,(tcur2/2)+1,right);
    else
      ans+=(current,tcur2/2,right);
    return ans;
  }
}
int main(){
  long t;
  long n;
  long m,max,min;
  scanf("%ld",&t);
  while(t--){
    max=0;
    scanf("%ld %ld",&n,&m);
    max=(n*(n+1))/2;
    max+=n;
    min=findMin(1,(1+n)/2,n);
    if(n==2){min=max=5;}
    if(n==1){min=max=2;}
    if(m>=min&&m<=max)printf("0\n");
    else if(m>max)printf("%ld\n",m-max);
    else if(m<min)printf("-1\n");
  }
  return 0;
}