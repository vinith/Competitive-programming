#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

#define mod 1000000007
char s[10001];
long long count=0;
int solve(int pos,int len){
  int temp=0;
  //printf("%d\n",pos+1);
  //cout<<sum<<endl;
  if(pos==len-1){
    return 0;
  }else{
    //printf("solving for pos:%d\n",pos+1);
    for(int i=pos+1;i<len;i++){
      temp=s[i]-'0'+solve(i,len);
      //cout<<i<<endl;
      if(temp%9==0 &&temp!=0){
        count++;
        cout<<temp<<endl;
        if(temp^1000000007==0)temp%=mod;
      }
      return temp;
    }
  }
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    scanf("%s",s);
    solve(-1,strlen(s));
    printf("%lld\n",count);
    count=0;
  }
  return 0;
}