#include<iostream>
#include<cstdio>
using namespace std;
double climb(double cur,double *u,double fatigue,int day){
  if(*u<0)*u=0;
  if(day==1)cur=*u;
  else cur+=(*u);
  *u-=fatigue;
  return cur;
}
double slide(double cur,double d){
  return cur-d;
}
int main(){
  double h,u,d,f,cur,fatigue;
  int day;
  while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f)&&h!=0){
    cur=-1;
    day=1;
    fatigue=u*(f/100);
    while(1){
      cur=climb(cur,&u,fatigue,day);
      if(cur>h){
        printf("success on day %d\n",day);
        break;
      }
      cur=slide(cur,d);
      if(cur<0){
        printf("failure on day %d\n",day);
        break;
      }
      day++;
    }
  }
  return 0;
}
