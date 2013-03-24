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

int main(){   
  int t;
  scanf("%d\n\n",&t);
  string s;
  map<string,int> vals;
  int tot=0;
  while(t--){    
    while(getline(cin,s)&&s!=""){
      vals[s]++;
      tot++;
    }
    map<string,int>::iterator it;
    for(it=vals.begin();it!=vals.end();it++){
      printf("%s %0.4lf\n",it->first.c_str(),100.0*it->second/tot);
    }
    if(t){
      tot=0;
      vals.clear();
      putchar('\n');
    }
  }
  return 0;
}
