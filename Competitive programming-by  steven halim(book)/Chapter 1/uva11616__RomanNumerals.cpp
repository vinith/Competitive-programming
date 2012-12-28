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
int val[256];
void toRoman(string s){
  int l=s.length();
  char c;
  switch(l){
    case 4:
      c=s[l-4];
      if(c=='1')putchar('M');
      else if(c=='2')printf("MM");
      else printf("MMM");
    case 3:
      c=s[l-3];
      if(c=='1')putchar('C');
      else if(c=='2')printf("CC");
      else if(c=='3')printf("CCC");
      else if(c=='4')printf("CD");
      else if(c=='5')printf("D");
      else if(c=='6')printf("DC");
      else if(c=='7')printf("DCC");
      else if(c=='8')printf("DCCC");
      else if(c=='9')printf("CM");
    case 2:
      c=s[l-2];
      if(c=='1')putchar('X');
      else if(c=='2')printf("XX");
      else if(c=='3')printf("XXX");
      else if(c=='4')printf("XL");
      else if(c=='5')printf("L");
      else if(c=='6')printf("LX");
      else if(c=='7')printf("LXX");
      else if(c=='8')printf("LXXX");
      else if(c=='9')printf("XC");
    case 1:
      c=s[l-1];
      if(c=='1')putchar('I');
      else if(c=='2')printf("II");
      else if(c=='3')printf("III");
      else if(c=='4')printf("IV");
      else if(c=='5')printf("V");
      else if(c=='6')printf("VI");
      else if(c=='7')printf("VII");
      else if(c=='8')printf("VIII");
      else if(c=='9')printf("IX");
      break;
  }
}
void toDecimal(string s){
  int l=s.length(),ret=0;
  for(int i=0;i<l;i++){
    if(i+1<l){
      if(val[s[i]]<val[s[i+1]]){
        ret+=(val[s[i+1]]-val[s[i]]);
        i++;
      }
      else ret+=val[s[i]];
    }else ret+=val[s[i]];
  }
  printf("%d",ret);
}
int main(){
  //freopen("input.in","r",stdin);
  //freopen("output.out","w",stdout);
  string s;
  val['I']=1; val['X']=10; val['C']=100; val['M']=1000;
  val['V']=5; val['L']=50; val['D']=500;
  while(getline(cin,s)){
    if(s[0]>='1'&&s[0]<='9')toRoman(s);
    else toDecimal(s);
    putchar('\n');
  }
  return 0;
}
