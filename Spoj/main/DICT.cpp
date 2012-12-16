using namespace std;
#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
int main(){
  int n,k;
  bool match;
  scanf("%d",&n);
  string words[n],search;
  for(int i=0;i<n;i++)cin>>words[i];
  scanf("%d",&k);
  for(int Case=0;k--;Case++){
    cin>>search;
    string output[n];int ocount=0;
    printf("Case #%d:\n",Case+1);
    match=false;
    for(int i=0;i<n;i++){
      if(words[i].compare(search)){
        if(string::npos!=words[i].find(search)){
          output[ocount]=words[i];ocount++;
          match=true;
        }
      }
    }
    if(!match)printf("No match.\n");
    else{
      sort(output,ocount-1);
      for(int i=0;i<ocount;i++)cout<<output[i]<<endl;
    }
  }
  return 0;
}