#include<iostream>
#include<cstdio>
using namespace std;
int ways[31];
inline void solve(){
   int streak=0;
   int ans=1;
   char previous,current,str[100];
   gets(str);
   current=str[0];
   streak=1;
   for(int i=0;str[i]!='\0';i++){
      current=str[i];
      if(current==previous)streak++;
      else{
         ans*=ways[streak];
         streak=1;
         previous=current;
      }
   }
   ans*=ways[streak];
   printf("%d\n",ans); 
}
inline void pre(){
   ways[1]=1;
   for(int i=2;i<=30;i++)ways[i]=ways[i-1]<<1;
}
int main(){
   pre();
   //for(int i=1;i<=30;i++)cout<<ways[i]<<" ";
   //cout<<endl;
   int t;
   scanf("%d\n",&t);
   while(t--){
      solve();
   }
}