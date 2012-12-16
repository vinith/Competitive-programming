#include<cstdio>
#include<cmath>
#
using namespace std;
int main(){
   int num,count,t;
   while(scanf("%d",&num)){
      count=0;
      t=sqrt(num)+1;
      for(int k=0;k<=t;k++)for(int i=k;i<=t;i++)if((k<<1+i<<1)==num)count++;
      printf("%d\n",count);
   }
   return 0;
}