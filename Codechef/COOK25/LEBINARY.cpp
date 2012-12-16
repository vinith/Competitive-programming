#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

int main(){
  int t;
  cin>>t;
  string s;
  char temp;
  while(t--){
     cin>>s;
     temp=s[s.length()-1];
     if((temp-'0')%2==0)
        cout<<"YES\n";
     else cout<<"NO\n";
  }  
  return 0;
}