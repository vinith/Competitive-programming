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
   char op,dummy;
   int x,y,r,c;
   int rpos[1235],cpos[5679];
   int row[1235],col[5679];
   for(int i=1;i<=1234;i++)row[i]=col[i]=rpos[i]=cpos[i]=i;
   for(int i=1235;i<=5678;i++)col[i]=cpos[i]=i;
   while(scanf("%c",&op)>0){
      if(op=='W')scanf("%d",&x);
      else scanf("%d %d",&x,&y);
      if(op=='R'){
         swap(row[x],row[y]);
         rpos[row[x]]=x;
         rpos[row[y]]=y;
      }
      else if(op=='C'){
         swap(col[x],col[y]);
         cpos[col[x]]=x;
         cpos[col[y]]=y;
      }
      else if(op=='Q'){
         printf("%d\n",5678*(row[x]-1)+col[y]);
      }
      else if(op=='W'){
         if(x%5678){r=(x/5678)+1;c=x%5678;}
         else {r=x/5678;c=5678;}
         //cout<<r<<" "<<c<<endl;
         printf("%d %d\n",rpos[r],cpos[c]);
      }
   }
   return 0;
}