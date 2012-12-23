#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int k,n,m,x,y;
  while(scanf("%d",&k)&&k!=0){
    scanf("%d %d",&n,&m);
    while(k--){
      scanf("%d %d",&x,&y);
      if(x==n||y==m)printf("divisa");
      else if(x<n){
        if(y>m)printf("NO");
        else printf("SO");
      }else{
        if(y>m)printf("NE");
        else printf("SE");
      }
      putchar('\n');
    }
  }
  return 0;
}
