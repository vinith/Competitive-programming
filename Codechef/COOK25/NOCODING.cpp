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
  int t,diff;
  cin>>t;
  string s;
  while(t--){
     int sum=1;
     cin>>s;
     //sum=s[0]-'a';
     char prev=s[0],temp;
     for(int i=1;s[i]!='\0';i++){
        temp=s[i];
        if(temp>prev)
           diff=temp-prev;
        else if(temp==prev)
           diff=0;
        else
           diff='z'-prev+temp-'a'+1;
        //cout<<'z'-temp<<endl;
        //cout<<diff<<endl;
        sum+=diff;
        prev=temp;
   }
   sum+=s.length();
   //cout<<sum<<endl;
   if(sum<=(s.length()*11))cout<<"YES\n";
   else cout<<"NO\n";
  }  
  return 0;
}