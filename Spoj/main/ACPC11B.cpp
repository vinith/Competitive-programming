using namespace std;
#include<iostream>
#include<cstdio>
#include<algorithm>
inline int read(){
  char temp;
  int x=0;
  temp=getchar_unlocked();
  while(temp<48)temp=getchar_unlocked();
  x+=(temp-'0');
  temp=getchar_unlocked();
  while(temp>=48){
    x=(x<<3)+(x<<1);
    x+=(temp-'0');
    temp=getchar_unlocked();
  }
  return x; 
}
int main(){
  int t,minDiff;
  int arr1[1001],arr2[1001],n1,n2;
  int s1,s2,num1,num2;
  t=read();
  while(t--){
    minDiff=1000001;
    n1=read();
    for(int i=0;i<n1;i++)arr1[i]=read();
    n2=read();
    for(int i=0;i<n2;i++)arr2[i]=read();
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    s1=s2=0;
    //for(int i=0;i<n1;i++)printf("%d  ",arr1[i]);cout<<endl;
    //for(int i=0;i<n1;i++)printf("%d  ",arr2[i]);cout<<endl;
    while(s1<n1 && s2<n2){
      num1=arr1[s1];num2=arr2[s2];
      if(num1<num2){
        s1++;
        minDiff=min(minDiff,(num2-num1));
      }else if(num1==num2){
        //cout<<s1<<" "<<s2<<endl;
        minDiff=0;
        break;
      }else{
        s2++;
        minDiff=min(minDiff,(num1-num2));
      }
    }
    printf("%d\n",minDiff);
  }
  return 0;
}