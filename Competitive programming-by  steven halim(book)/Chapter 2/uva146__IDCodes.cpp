#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

#define size 1000
bool Next_Permutation(char *a){
  bool possible=false;
  int small,big;
  int l=strlen(a);
  for(int k=l-2;k>=0;k--)
    if(a[k]<a[k+1]){
      small=k;
      possible=true;
      break;
    }
  if(possible){
    for(int x=l-1;x>small;x--)
      if(a[x]>a[small]){
        big=x;
        break;
      }
    swap(a[small],a[big]);
    for(int st=small+1,en=l-1;st<en;st++,en--)swap(a[st],a[en]);
  }
  return possible;
}
int main(){
  char num[size];
  while(scanf("%s",num)&&strcmp(num,"#")){
    if(Next_Permutation(num))printf("%s\n",num);
    else printf("No Successor\n");
  }
  return 0;
}
