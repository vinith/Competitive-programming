#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

#define mod 1000000007
char s[10001];
long long count=0;
int solve(int pos,int len,int sum){
  int temp;
  //printf("%d %d\n",pos+1,sum);
  //cout<<sum<<endl;
  if(sum%9==0 &&sum!=0)count++;
  if(sum^1000000007==0)sum%=mod;
  if(pos==len-1){
    return 0;
  }else{
    //printf("solving for pos:%d\n",pos+1);
    for(int i=pos+1;i<len;i++){
      solve(i,len,sum+s[i]-'0');
    }
  }
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    scanf("%s",s);
    solve(-1,strlen(s),0);
    printf("%lld\n",count);
    count=0;
  }
  return 0;
}