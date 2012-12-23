#include<iostream>
#include<map>
#include<cstdio>
#include<string>
using namespace std;

int main(){
  int n;
  scanf("%d\n",&n);
  map<string,int> conq;
  string country;
  while(n--){
    cin>>country;
    conq[country]++;
    getline(cin,country);
  }
  map<string,int>::iterator it=conq.begin(),en=conq.end();
  for(;it!=en;it++) cout<<it->first<<" "<<it->second<<"\n";
  return 0;
}
