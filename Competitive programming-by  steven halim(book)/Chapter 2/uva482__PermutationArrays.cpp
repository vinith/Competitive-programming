#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<sstream>
#include<map>
#include<vector>
#include<deque>
using namespace std;

int main(){
   //freopen("input.in","r",stdin);
   //freopen("output.out","w",stdout);
   int t,n;
   scanf("%d",&t);
   getchar();
   string s1,s2,num;
   while(t--){
     getchar();
     getline(cin,s1);
     getline(cin,s2);
     stringstream p(s1),x(s2);
     map<int,string> ans;
     while(p>>n&&x>>num)ans[n]=num;
     map<int,string>::iterator it=ans.begin(),en=ans.end();
     for(;it!=en;it++)cout<<it->second<<"\n";
     if(t-1>=0)cout<<"\n";
   }
   return 0;
}
