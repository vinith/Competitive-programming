#include<iostream>
#include<cstdio>
using namespace std;

int main(){
   char s[100000];
   bool left=true;
   while(gets(s)){
      for(int i=0;s[i]!='\0';i++){
         if(s[i]=='"'){
            if(left)printf("``");
            else printf("''");
            left=!left;
         }else printf("%c",s[i]);
      }
      putchar('\n');
   }
   return 0;
}
