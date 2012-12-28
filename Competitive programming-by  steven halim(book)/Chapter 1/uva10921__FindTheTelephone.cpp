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

int main(){
   //freopen("input.in","r",stdin);
   //freopen("output.out","w",stdout);
   map<char,char> g;
   g['A']=g['B']=g['C']='2';
   g['D']=g['E']=g['F']='3';
   g['G']=g['H']=g['I']='4';
   g['J']=g['K']=g['L']='5';
   g['M']=g['N']=g['O']='6';
   g['P']=g['Q']=g['R']=g['S']='7';
   g['T']=g['U']=g['V']='8';
   g['W']=g['X']=g['Y']=g['Z']='9';
   string s;
   int l;
   while(getline(cin,s)){
     l=s.length();
     for(int i=0;i<l;i++){
       if(g.find(s[i])==g.end())putchar(s[i]);
       else putchar(g[s[i]]);
     }
     putchar('\n');
   }
   return 0;
}
