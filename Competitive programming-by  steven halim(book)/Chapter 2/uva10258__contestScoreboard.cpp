#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
#include<deque>
using namespace std;
class contest{
  public:
    int scount;
    long long penalty[11],totPenalty;
    bool solved[11];
    contest(){
      scount=totPenalty=0;
      memset(solved,0,sizeof(solved));
      memset(penalty,0,sizeof(penalty));
    }
};
map<int,contest> info;
bool teamSort(int a,int b){
  contest x=info[a],y=info[b];
  if(x.scount==y.scount){
    if(x.totPenalty==y.totPenalty){
      return a<b;
    }else return x.totPenalty<y.totPenalty;
  }else return x.scount>y.scount;
}
int main(){
  contest x,temp;
  char line[30],l;
  int tn,pn,ti,n;
  scanf("%d",&n);
  getchar();getchar();
  while(n--){
    map<int,contest>::iterator it;
    while(gets(line)&&line[0]>='0'){
      sscanf(line,"%d %d %d %c",&tn,&pn,&ti,&l);
      if(info.find(tn)==info.end())
        info[tn]=x;
      temp=info[tn];
      if(temp.solved[pn])
        continue;
      if(l=='C'){
        temp.scount++;
        temp.solved[pn]=1;
        temp.penalty[pn]+=ti;
        temp.totPenalty+=temp.penalty[pn];
      }else if(l=='I')
        temp.penalty[pn]+=20;
      info[tn]=temp;
    }
    vector<int> teams;
    vector<int>::iterator vit;
    for(it=info.begin();it!=info.end();it++)
      teams.push_back(it->first);
    sort(teams.begin(),teams.end(),teamSort);
    for(vit=teams.begin();vit!=teams.end();vit++){
      temp=info[*vit];
      printf("%d %d %lld\n",*vit,temp.scount,temp.totPenalty);
    }
    if(n!=0){
      putchar('\n');
      info.clear();
    }
  }
  return 0;
}
