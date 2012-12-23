#include<iostream>
#include<cstdio>
#include<string>
#include<map>
using namespace std;

int main(){
  int n,k,m,l;
  scanf("%d",&n);
  char c;
  int v;
  string article;
  double cost;
  while(n--){
    map<char,int> pay;
    scanf("%d\n",&k);
    while(k--){
      scanf("%c %d\n",&c,&v);
      pay[c]=v;
    }
    scanf("%d\n",&m);
    cost=0;
    while(m--){
      getline(cin,article);
      l=article.length();
      for(int i=0;i<l;i++)cost+=pay[article[i]];
    }
    printf("%.2lf$\n",cost/100);
  }
  return 0;
}
