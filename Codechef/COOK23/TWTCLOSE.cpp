using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
int main(){
  int n,k,temp;
  int current=0;
  bool click[1001]={false};
  char inp[15];
  scanf("%d %d",&n,&k);
  for(int i=0;i<k;i++){
    scanf("%s",inp);
    if(inp[2]=='O'){
      memset(click,false,sizeof(click));
      current=0;
    }
    else{
      scanf("%d",&temp);
      if(click[temp]==false){
        current+=1;
        click[temp]=true;
      }
      else if(click[temp]==true){
        current-=1;
        click[temp]=false;
      }    
    }
    printf("%d\n",current);
  }
  return 0;
}