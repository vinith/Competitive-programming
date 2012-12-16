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
  int t,n;
  cin>>t;
  n=t;
  bool no,yes;
  char inp[5];
  while(t--){
     no=yes=false;
     for(int i=0;i<n;i++){
        cin>>inp;
        if(inp[0]=='N')no=true;
        else if(inp[0]=='Y')yes=true;
   }
   if(no&&yes)cout<<"YES\n";
   else cout<<"NO\n";
  }
  return 0;
}