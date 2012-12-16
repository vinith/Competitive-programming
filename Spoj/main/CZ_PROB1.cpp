#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
bool primes[7998]={false};
int sp[510];
int c[8000][5]={0};
void pre(){
   primes[0]=primes[1]=true;
   for(int i=2;i*i<=7994;i++){
      if(!primes[i])
      for(int k=i*i;k<=7994;k+=i)primes[k]=true;
   }
   int top=2;
   sp[1]=2;
   for(int i=3;i<=7994;i++)if(!primes[i]&&((i%4)==1))sp[top++]=i;
}
int getVal(int i,int j){
   if(i==0) return 1;
   if(i<0||j<=0) return 0;
   return c[i][j];
}
int count(int n,int k){
   for(int i=0;i<=n;i++) for(int j=0;j<=k;j++){
      c[i][j]=getVal(i-j,j)+getVal(i,j-1);
   }
   return c[n][k];
}
int main(){
   pre();
   int t,n,k;
   scanf("%d",&t);
   while(t--){
      scanf("%d %d",&n,&k);
      printf("%d\n",count(sp[n],k));
   }
}