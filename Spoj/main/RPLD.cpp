using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
inline int read(){
  char temp;
  int x=0;
  temp=getchar_unlocked();
  while(temp<48)temp=getchar_unlocked();
  x+=(temp-'0');
  temp=getchar_unlocked();
  while(temp>=48){
    x=(x<<3)+(x<<1);
    x+=(temp-'0');
    temp=getchar_unlocked();
  }
  return x; 
}
int main(){
  int t,n,r,i,c;
  t=read();
  bool possible;;
  for(int Case=1;Case<=t;Case++){
    possible=true;
    n=read();
    r=read();
    map <int,map<int,bool> > arr;
    while(r--){
      i=read();c=read();
      if(arr[i][c]==true){
        possible=false;
        while(r--){
          i=read();c=read();
        }
        break;
      }
      arr[i][c]=true;
    }
    if(possible)printf("Scenario #%d: possible\n",Case);
    else printf("Scenario #%d: impossible\n",Case);
  }
  return 0;
}