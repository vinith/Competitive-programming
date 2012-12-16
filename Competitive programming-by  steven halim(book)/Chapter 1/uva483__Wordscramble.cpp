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
    char s[10000],c;
    int top=0;
    while((c=getchar())>0){
      if(c==' '||c=='\n'){
         for(int i=top-1;i>=0;i--)putchar(s[i]);
         top=0;
         putchar(c);
      }else s[top++]=c;
   }
   return 0;
}