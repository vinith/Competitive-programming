using namespace std;
#include<iostream>
#include<cstdio>
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
  int n,k;
  scanf("%d %d",&n,&k);
  k-=1;
  map<int,int> top;
  int chefCount=0;
  int num;
  map<int,map<int,int> > pos;
  //int pos[n][k+1];
  map<int,bool> finalCheck;
  map<int,bool>::iterator it,end;
  for(int i=1;i<=n;i++){
    num=read();
    finalCheck[num]=1;
    if(top[num]==0){
      //cout<<"new series start"<<endl;
      pos[num][top[num]++]=i;
    }else{//already exists
      if(pos[num][0]+k==i){
        //cout<<"series ends here"<<endl;
        chefCount++;
        top[num]=0;
      }else if(pos[num][0]+k>i){
        //cout<<"room for more"<<endl;
        pos[num][top[num]++]=i;
      }else{
        //cout<<"previous covered"<<endl;
        chefCount++;
        pos[num][0]=i;
        top[num]=1;
      }
    }
  }
  //cout<<top[40]<<endl;
  end=finalCheck.end();
  for(it=finalCheck.begin();it!=end;it++){
    if(top[it->first]!=0){
      chefCount++;
      //cout<<it->first<<endl;
    }
  }
  printf("%d\n",chefCount);
  return 0;
}