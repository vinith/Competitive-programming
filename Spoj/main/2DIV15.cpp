#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
bool five,three,zero,az;
void checkZeroFive(int dig[]){
   if(dig[0]>0)zero=true;
   if(dig[5]>0)five=true;
}
bool allZero(int dig[]){
   if(dig[0]==0)return false;
   for(int i=1;i<=9;i++)
      if(dig[i]>0)return false;
   return true;
}
int main(){
   int t,sum,temp;
   char c;
   scanf("%d\n",&t);
   while(t--){
      bool reserve=false;
      int dig[10]={0},oneCount=0,twoCount=0,remCount=0;
      five=three=zero=false;
      sum=0;
      while((c=getchar_unlocked()) && c>='0' && c<='9'){
         temp=c-'0';
         dig[temp]++;
         sum+=temp;
         if(temp%3==1)oneCount++;
         else if(temp%3==2)twoCount++;
      }
      checkZeroFive(dig);
      if(!zero&&five){reserve=true;dig[5]--;twoCount--;}
      if(sum%3==0 && sum>0)
         three=true;
      else if(sum%3==1){
         if(oneCount>0){
            for(int k=1;k<=9;k++)if(dig[k]>0 && k%3==1){dig[k]--;three=true;break;}
         }else if(twoCount>1){
            three=true;
            for(int k=1;remCount<2;k++){
               if(dig[k]>0 && k%3==2){
                  dig[k]--;
                  remCount++;
                  k=0;
               }
            }
         }
      }else if(sum%3==2){
         //cout<<"r";
         if(twoCount>0){
            three=true;
            //cout<<"p";
            for(int k=1;k<=9;k++)if(dig[k]>0 && k%3==2){dig[k]--;break;}
         }else if(oneCount>1){
            //cout<<"s";
            three=true;
            for(int k=1;remCount<2;k++){
               if(dig[k]>0 && k%3==1){
                  dig[k]--;
                  remCount++;
                  k=0;
               }
            }
         }
      }
      //cout<<three<<endl;
      az=allZero(dig);
      if(az) putchar('0');
      else if(three && (five||zero)){
         int times;
         for(int k=9;k>=1;k--){
            times=dig[k];
            for(int r=0;r<times;r++)printf("%d",k);
         }
         if(reserve)putchar('5');
         times=dig[0];
         for(int r=0;r<times;r++)putchar('0');
      }else{
         printf("impossible");
      }
      putchar('\n');
   }
   return 0;
}