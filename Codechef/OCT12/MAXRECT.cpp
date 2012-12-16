#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
#include<cassert>
using namespace std;
int h,w;
long long arr[301][301];

//r
int rownum,colstart,colend;
int start,curStart,end;
long long ans=-1,best,current;
bool reset=false;

//c
int colnum,rowstart,rowend;

long long colSolve(){
   ans=-1;
   for(int k=0;k<w;k++){
      current=0;
      best=-1;
      curStart=end=start=0;
      for(int i=0;i<h;i++){
         current+=arr[i][k];
         if(reset){
            reset=false;
            curStart=i;
         }
         if(current<0){
            current=0;
            reset=true;
         }
         if(best<current){
            best=current;
            end=i;
            start=curStart;
         }
      }
      //cout<<k<<" - "<<best<<" "<<start<<" "<<end<<endl;
      if(ans<best){
         ans=best;
         colnum=k;
         rowstart=start;
         rowend=end;
      }
      //cout<<"ans"<<ans<<endl;
      //cout<<rownum<<" --- "<<" "<<colstart<<" "<<colend<<endl;
   }
   return best;
}
long long rowSolve(){
   ans=-1;
   for(int k=0;k<h;k++){
      current=0;
      best=-1;
      curStart=end=start=0;
      for(int i=0;i<w;i++){
         current+=arr[k][i];
         if(reset){
            reset=false;
            curStart=i;
         }
         if(current<0){
            current=0;
            reset=true;
         }
         if(best<current){
            best=current;
            end=i;
            start=curStart;
         }
      }
      //cout<<k<<" - "<<best<<" "<<start<<" "<<end<<endl;
      if(ans<best){
         ans=best;
         rownum=k;
         colstart=start;
         colend=end;
      }
      //cout<<"ans"<<ans<<endl;
      //cout<<rownum<<" --- "<<" "<<colstart<<" "<<colend<<endl;
   }
  return best;
  /*
   printf("%d %d\n%d\n",1,colend-colstart+1,rownum);
   for(int k=colstart;k<=colend;k++)printf("%d ",k);
   putchar('\n');
   */
}
void rprint(){
   printf("%d %d\n%d\n",1,colend-colstart+1,rownum);
   for(int k=colstart;k<=colend;k++)printf("%d ",k);
   putchar('\n');
}
void cprint(){
   printf("%d %d\n",rowend-rowstart+1,1);
   for(int k=rowstart;k<=rowend;k++)printf("%d ",k);
   printf("\n%d\n",colnum);
}
int main(){
   
   scanf("%d %d",&h,&w);
   for(int i=0;i<h;i++)for(int k=0;k<w;k++){
      scanf("%lld",&arr[i][k]);
   }
   if(rowSolve()>colSolve())rprint();
   else cprint();
   return 0;
}