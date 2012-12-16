#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
bool isEven(char a){
  for(int i='0';i<='8';i+=2)
    if(a==i)return true;
  return false;
}
int main(){
  int t;
  char n[1001];
  scanf("%d",&t);
  while(t--){
    scanf("%s",n);
    if(isEven(n[strlen(n)-1]))printf("Mandark\n");
    else printf("Dexter\n");
  }  
  return 0;
}