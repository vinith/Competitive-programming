using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
int answer(bool c1,bool c2,bool c3)
{
  int ans=0;
  if(c1)ans+=4;
  if(c2)ans+=2;
  if(c3)ans+=1;
  return ans;
  
}
int main()
{
  int t,n,p,status,solved;
  bool c1,c2,c3;
  scanf("%d",&t);
  for(int cases=1;cases<=t;cases++){
    c1=c2=c3=true;
    int prob[11]={0};
   scanf("%d %d",&n,&p);
   for(int i=0;i<n;i++){
     solved=0;
    for(int k=0;k<p;k++){
      scanf("%d",&status);
      prob[k]+=status;
      solved+=status;
    }
    if(c2&&solved==0)c2=false;
    if(c3&&solved==p)c3=false;
   }
   for(int i=0;i<p;i++){
    if(prob[i]==0){c1=false;break;}
  }
  printf("Case %d: %d\n",cases,answer(c1,c2,c3));
  }
  return 0;
  
}