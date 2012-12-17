#include<iostream>
#include<cstdio>
#include<map>
#include<cstring>
using namespace std;

int main(){
  char name[21];
  int l;
  map<char,int> group;
  group['B']=group['P']=group['F']=group['V']=1;
  group['C']=group['S']=group['K']=group['G']=group['J']=group['Q']=2;
  group['X']=group['Z']=2;
  group['D']=group['T']=3;
  group['L']=4;
  group['M']=group['N']=5;
  group['R']=6;
  printf("%9cNAME%*cSOUNDEX CODE\n",' ',int(25-strlen("NAME")),' ');
  while(scanf("%s",name)>0){
    string tempCode="";
    l=strlen(name);
    tempCode+=name[0];
    for(int i=1;i<l;i++){
      if(!(group[name[i]]==0||group[name[i]]==group[name[i-1]]))tempCode+='0'+group[name[i]];
    }
    string ans=tempCode.substr(0,4);
    l=ans.length();
    for(int i=l;i<4;i++)ans+='0';
    printf("%9c%s%*c%s\n",' ',name,int(25-strlen(name)),' ',ans.c_str());
  }
  printf("%19cEND OF OUTPUT\n",' ');
  return 0;
}
