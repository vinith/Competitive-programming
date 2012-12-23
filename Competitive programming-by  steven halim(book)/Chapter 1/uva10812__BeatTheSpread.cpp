#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int t,a,b;
  float x,y;
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&a,&b);
    x=(float)(a+b)/2;
    y=(float)a-x;
    if(y<0||(int)x!=x||(int)y!=y)printf("impossible\n");
    else printf("%d %d\n",(int)x,(int)y);
  }
  return 0;
}
