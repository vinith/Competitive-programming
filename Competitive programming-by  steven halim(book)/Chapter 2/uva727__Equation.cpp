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
#include<string>
using namespace std;
bool isOper(char c){
  if(c=='-'||c=='+'||c=='*'||c=='/')
    return true;
  return false;
}
bool hasPrecedence(char a,char b){
  if(a=='-'||a=='+')
    if(b=='/'||b=='*')
      return false;
  if(a=='('||a==')'||b=='('||b==')') return false;
  return true;
}
void evaluate(string s){
  stack<char> eqn;
  int l=s.length();
  int opc=0;
  string ans="";
  for(int i=0;i<l;i++){
    if(s[i]=='(')eqn.push('(');
    else if (isOper(s[i])){
      if(eqn.empty())eqn.push(s[i]);
      else{
        while(!eqn.empty()&&hasPrecedence(eqn.top(),s[i])){
          ans+=eqn.top();
          eqn.pop();
        }
        eqn.push(s[i]);
      }
    }else if(s[i]==')'){
      while(!eqn.empty()){
        if(eqn.top()=='('){
          eqn.pop();
          break;
        }          ans+=eqn.top();
        eqn.pop();
      }
    }else ans+=s[i];
  }
  while(!eqn.empty()){
    if(eqn.top()!='('){
      ans+=eqn.top();
      eqn.pop();
    }
  }
  cout<<ans;
  putchar('\n');
}
int main(){
  int t;
  char c,x;
  string s;
  scanf("%d\n\n",&t);
  while(t--){
    while(c=getchar()){
      if(c=='\n'||c<0){
        evaluate(s);
        s.clear();
        break;
      }else{
        x=getchar();
        s+=c;
      }
    }
    if(t)putchar('\n');
  }
  return 0;
}
