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
class team{
  public:
    string name;
    int points,played,wins,ties,losses;
    int goaldiff,goalscored,goalsagainst;
    team(){
      points=played=wins=ties=losses=0;
      goaldiff=goalscored=goalsagainst=0;
    }
};
map<string,team> info;
bool teamCompare(string ta,string tb){
  team a=info[ta],b=info[tb];
  if(a.points==b.points){
    if(a.wins==b.wins){
      if(a.goaldiff==b.goaldiff){
        if(a.goalscored==b.goalscored){
          if(a.played==b.played){
            return a.name<b.name;
          }else return a.played<b.played;
        }else return a.goalscored>b.goalscored;
      }else return a.goaldiff>b.goaldiff;
    }else return a.wins>b.wins;
  }else return a.points>b.points;
}
string lower(string s){
  int l=s.length();
  string ret="";
  for(int i=0;i<l;i++){
    if(s[i]>='A' && s[i]<='Z')ret+=('a'+s[i]-'A');
    else ret+=s[i];
  }
  return ret;
}
int main(){
  //freopen("input.in","r",stdin);
  //freopen("output.out","w",stdout);
  int n,t,g;
  scanf("%d",&n); getchar();
  string tourName,teamName;
  char a[1000],b[1000];
  int sca,scb;
  while(n--){
    team x,y;
    getline(cin,tourName);
    vector<string> f;
    vector<string>::iterator it;
    scanf("%d",&t); getchar();
    while(t--){
      getline(cin,teamName);
      f.push_back(teamName);
      x.name=lower(teamName);
      info[teamName]=x;
    }
    scanf("%d",&g); getchar();
    while(g--){
      scanf("%[^#]#%d@%d#%[^\n]",a,&sca,&scb,b);getchar();
      string ta(a),tb(b);
      x=info[ta]; y=info[tb];
      x.played++; y.played++;
      x.goalscored+=sca; y.goalscored+=scb;
      x.goalsagainst+=scb; y.goalsagainst+=sca;
      x.goaldiff+=(sca-scb); y.goaldiff+=(scb-sca);
      if(sca>scb){
        x.wins++; y.losses++;
        x.points+=3;
      }else if(sca==scb){
        x.ties++; y.ties++;
        x.points++; y.points++;
      }else{
        y.wins++; x.losses++;
        y.points+=3;
      }
      info[ta]=x; info[tb]=y;
    }
    int rank=1;
    sort(f.begin(),f.end(),teamCompare);
    cout<<tourName<<"\n";
    for(it=f.begin();it!=f.end();it++,rank++){
      teamName=(*it);
      x=info[teamName];
      printf("%d) %s %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n",
      rank,teamName.c_str(),x.points,x.played,x.wins,x.ties,x.losses,x.goaldiff,x.goalscored,x.goalsagainst);
    }
    info.clear();
    if(n>0)putchar('\n');
  }
  return 0;
}
