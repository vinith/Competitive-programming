#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
#include<deque>
#include<stack>
using namespace std;
stack <char> paran;
void clear(){
  while(!paran.empty())paran.pop();
}
bool match(char a,char b){
  if(a=='(' && b==')')return true;
  if(a=='[' && b==']') return true;
  return false;
}
void reduce(){
  char a,b;
  while(paran.size()>1){
    b=paran.top();
    paran.pop();
    a=paran.top();
    if(match(a,b)){
      paran.pop();
    }else{
      paran.push(b);
      break;
    }
  }
}
int main(){  
  string s;
  int t;
  for(scanf("%d",&t),getchar();t--;){
    getline(cin,s);
    for(int i=0;i<s.length();i++){
      paran.push(s[i]);
      reduce();
    }
    if(paran.empty())printf("Yes");
    else printf("No");
    putchar('\n');
    clear();
  }
  return 0;
}
