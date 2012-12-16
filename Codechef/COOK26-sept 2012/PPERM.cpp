#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;


#define limit 5000001  
#define sq 2237
#define mod 1000000007
bool primes[limit]={false};
int ar[limit];
void setar(){
   for(int i=0;i<=limit;i++)ar[i]=i+1;
}
void pre(){
   cout<<"here"<<endl;
   primes[0]=primes[1]=true;
   for(int i=4;i+2<limit;i+=2)primes[i]=true;
   for(int i=3;i<=sq;i+=2){
      if(!primes[i]){
         for(int j=i+i;j+i<limit;j+=i)primes[j]=true;
      }
   }  
}
int main(){
   //cout<<"here1"<<endl;
   pre();
   long long count=0;
   int t,n;
   //scanf("%d",&t);
   int temp[limit],pos;
   bool ok;
   while(t--){
      ok=true;
      //scanf("%d",&n);
      setar();
      do {
         for(int i=0;i<n;i++){
            temp[i]=ar[i];
         }
         sort(temp,temp+1);
         for(int i=0;i<n;i++){
            for(int k=0;k<n;k++)if(ar[i]==temp[k]){pos=k+1;break;}
            if(!(pos==1||primes[pos]==false)){ok=false;break;}
         }
         if(ok)count++;
      } while ( next_permutation (ar,ar+n) );
      cout<<count<<endl;
   }   
   return 0;
}