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
  bool no,yes,fin;
  char inp[5];
  fin=false;
  t--;
  while(t--){
     for(int i=0;i<n;i++){
        scanf("%s",inp);
     }
   }
   no=true;
   yes=false;
   for(int i=0;i<n-1;i++){
      scanf("%s",inp);
      if(inp[i]=='Y')no=false;
   }
   scanf("%s",inp);
   if(no){
      if(inp[0]=='Y') yes=true;
   }
   if(!fin && no && yes)fin=true;
   for(int i=0;i<n-1;i++)printf("NO\n");
   if(fin)printf("YES\n");
   else printf("NO\n");
  return 0;
}