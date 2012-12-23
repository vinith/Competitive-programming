#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  char chrs[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
  char inp;
  bool found;
  while((inp=getchar_unlocked())!=EOF){
    found=false;
    for(int k=0;chrs[k];k++){
      if(inp==chrs[k]){
        putchar(chrs[k-1]);
        found=true;
        break;
      }
    }
    if(!found)putchar(inp);
  }
  return 0;
}
