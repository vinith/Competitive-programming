using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
class ll{
public:
  int n;
  ll *next;
};
int main(){
  int t,n,v;
  scanf("%d",&t);
  while(t--){
   scanf("%d",&n);
   ll *lelist[n+2];
   for(int i=0;i<=n;i++){
     lelist[i]=NULL;
   }
   for(int i=0;i<n;i++){
     scanf("%d",&v);
     v=i-v;
     ll *temp=new ll;
     temp->next=NULL;
     temp->n=i+1;
     if(lelist[v]==NULL){
       lelist[v]=temp;
    }else{
      temp->next=lelist[v];
      lelist[v]=temp;
    }
  }
  for(int i=0;i<=n;i++){
    if(lelist[i]!=NULL){
      ll *temp1=lelist[i];
      while(temp1!=NULL){
        printf("%d ",temp1->n);
        temp1=temp1->next;
      }
    }
  }
  putchar('\n');
  }
  return 0;
}