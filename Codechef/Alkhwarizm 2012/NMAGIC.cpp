#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

int main(){
   int t,l;
   scanf("%d",&t);
   string s;
   int four;
   while(t--){
      four=-1;
      cin>>s;
      l=s.length();
      if(s[l-1]=='4'){
         s[l-1]='7';
         cout<<s<<"\n";
      }
      else{
         for(int i=l-1;i>=0;i--){
            if(s[i]=='4'){
               four=i;
               s[i]='7';
               for(int k=i+1;k<l;k++)s[k]='4';
               break;
            }
         }
         if(four==-1){
            for(int i=0;i<=l;i++)putchar('4');
            putchar('\n');
         }else{
            cout<<s<<"\n";
         }
      }
   }
   return 0;
}