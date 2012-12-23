#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
  char inp[100];
  float dist=0;
  int pspeed=0,speed=0;
  double elapsed;
  double h,m,s,ph=0,pm=0,ps=0;
  while((scanf("%[^\n]\n",inp)>0)){
    if(strlen(inp)>8){
      sscanf(inp,"%lf:%lf:%lf %d",&h,&m,&s,&speed);
      elapsed=(h+m/60+s/3600)-(ph+pm/60+ps/3600);
      //cout<<"elapsed = "<<elapsed<<" dist= "<<dist<<endl;
      dist+=(elapsed*pspeed);
      //cout<<"dist after add: "<<dist<<endl;
      pspeed=speed;
      ph=h;
      pm=m;
      ps=s;
    }else{
      sscanf(inp,"%lf:%lf:%lf",&h,&m,&s);
      elapsed=(h+m/60+s/3600)-(ph+pm/60+ps/3600);
      dist+=(elapsed*pspeed);
      printf("%s %.2lf km\n",inp,dist);
      ph=h;
      pm=m;
      ps=s;
    }
  }
  return 0;
}
