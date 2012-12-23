#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main(){
  int w,h,n;
  int x1,x2,y1,y2,empty,used;
  int sx,ex,sy,ey;
  while(scanf("%d %d %d",&w,&h,&n)&&!(w==0&&h==0&&n==0)){
    map<int,map<int,bool> > rect;
    used=0;
    while(n--){
      scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
      sx=min(x1,x2);ex=max(x1,x2);
      sy=min(y1,y2);ey=max(y1,y2);
      for(int i=sx;i<=ex;i++)for(int k=sy;k<=ey;k++)if(rect[i][k]==0)used++,rect[i][k]=1;
    }
    empty=w*h-used;
    if(empty==0)printf("There is no empty spots.\n");
    else if(empty==1)printf("There is one empty spot.\n");
    else printf("There are %d empty spots.\n",empty);
  }
  return 0;
}
