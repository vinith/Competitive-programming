using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
void fact(long long n)
{
   long long sq=sqrt((double)n)+2;
   int times=0;
   for(int i=2;i<=sq;i++){
      if(n%i==0){
         int div=i;
         while(n%i==0){
            times++;   
            n/=i; 
         }
         printf("%d^%d ",div,times);
         times=0;
      }
   }
   if(n>1)printf("%lld^1 ",n);
   putchar('\n');
}
int main()
{
   long long n;
   while(scanf("%lld",&n)&&n!=0){
      fact(n);
   }
   return 0;
}