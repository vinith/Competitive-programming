#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
bool primes[1001]={false};
void pre(){
   primes[0]=primes[1]=true;
   for(int i=2;i<=33;i++){
      if(primes[i]==false){
         for(int k=i*i;k<=1000;k+=i)primes[k]=true;
      }
   }
}
int main(){
   pre();
   int t,f;
   scanf("%d",&t);
   while(t--){
      int n;
      scanf("%d",&n);
      int arr[n+1];
      for(int i=1;i<=n;i++)scanf("%d",&arr[i]);
      if(primes[n]==false){
         printf("1\n%d ",n);
         for(int i=1;i<=n;i++)printf("%d ",i);
         putchar('\n');
      }else{
         for(int i=2;i<=1000;i++)if(primes[i]==false&&n%i==0){
            f=i;
            break;
         }
         cout<<f<<endl;
         printf("%d\n",(n/f)*2);
         for(int i=1;i<=n;i+=f){
            printf("%d ",f);
            for(int k=0;k<f;k++){
               printf("%d ",i+k);
            }
            putchar('\n');
         }
         for(int i=1;i<=f;i++){
            printf("%d ",f);
            for(int k=0;k<f;k++){
               printf("%d ",i+f*k);
            }
            putchar('\n');
         }
      }
   }
   return 0;
}