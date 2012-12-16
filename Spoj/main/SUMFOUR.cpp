using namespace std;
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
inline int read(){
  char temp;
  bool neg=false;
  int x=0;
  temp=getchar_unlocked();
  while(temp<45)temp=getchar_unlocked();
  if(temp=='-')
    neg=true;
  else
    x+=(temp-'0');
  temp=getchar_unlocked();
  while(temp>=48){
    x=(x<<3)+(x<<1);
    x+=(temp-'0');
    temp=getchar_unlocked();
  }
  if(!neg)
    return x;
  else
    return x*-1ll;
}
int main(){
  int n;
  long count=0;
  scanf("%d",&n);
  int A[n],B[n],C[n],D[n],num1,num2;
  int top=0,start1,start2,freq1,freq2;
  vector<int> m1,m2;
  for(int i=0;i<n;i++){
    A[i]=read();B[i]=read();C[i]=read();D[i]=read();
  }
  for(int i=0;i<n;i++){
    for(int k=0;k<n;k++){
      top++;
      m1.push_back(A[i]+B[k]);
      m2.push_back(-1*(C[i]+D[k]));
    }
  }
  sort(m1.begin(),m1.begin()+top);
  sort(m2.begin(),m2.begin()+top);
  start1=start2=0;
  while(start1<top && start2<top){
    num1=m1[start1];num2=m2[start2];
    if(num1>num2)
      start2++;
    else if(num1<num2)
      start1++;
    else{
      freq1=freq2=1;
      start1++;start2++;
      while(start1<top && m1[start1]==num1){
        start1++;freq1++;
      }
      while(start2<top && m2[start2]==num1){
        start2++;freq2++;
      }
      count+=(freq1*freq2);
    }
  }
  printf("%ld\n",count);
  return 0;
}
