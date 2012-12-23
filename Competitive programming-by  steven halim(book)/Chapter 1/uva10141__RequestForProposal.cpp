#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
  int n,p,no=0;
  string req,prop,bestProp;
  int met,nump;
  float cost,bestCost;
  scanf("%d %d\n",&n,&p);
  while(n>0&&p>0){
    no++;
    while(n--)getline(cin,req);
    met=-1;
    while(p--){
      getline(cin,prop);
      //cout<<prop<<endl;
      scanf("%f %d\n",&cost,&nump);
      for(int i=nump;i--;)getline(cin,req);
      if(nump>met){
        met=nump;
        bestCost=cost;
        bestProp=prop;
      }else if((nump==met)&&(cost<bestCost)){
        bestCost=cost;
        bestProp=prop;
      }
    }
    printf("RFP #%d\n%s\n",no,bestProp.c_str());
    scanf("%d %d\n",&n,&p);
    if(!(n==0&&p==0))putchar('\n');
  }
  return 0;
}
