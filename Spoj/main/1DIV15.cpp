#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
bool five,three,zero;
void checkZeroFive(int dig[]){
   if(dig[0]>0)zero=true;
   if(dig[5]>0)five=true;
}
bool allZero(int dig[]){
   if(dig[0]==9)return false;
   for(int i=1;i<=9;i++)
      if(dig[i]>0)return false;
      return true;
}
int main(){
   int t,sum,temp;
   char c;
   scanf("%d\n",&t);
   while(t--){
      int dig[10]={0},oneCount=0,twoCount=0,remCount=0;
      five=three=zero=false;
      sum=0;
      while((c=getchar()) && c>='0' && c<='9'){
         temp=c-'0';
         dig[temp]++;
         sum+=temp;
         if(temp%3==1)oneCount++;
         else if(temp%3==2)twoCount++;
      }
      checkZeroFive(dig);
      //check3 here
      if(sum%3==0 &&sum>0)three=true;
      else if(sum%3==1){
         three=true;
         if(oneCount>0){
            for(int i=1;i<=9;i++){
               if(i%3==1&&dig[i]>0){
                  //cout<<dig[2]<<endl;
                  dig[i]-=1;
                  break;
               }
            }
         }else if(twoCount>1){
            if(zero==false && (twoCount-dig[5])<2)three=false;
            else
               for(int i=1;remCount<2;i++){
                  if(i%3==2){
                     if(dig[i]>1){
                        dig[i]-=1;
                        remCount++;
                        if(remCount==1){
                           dig[i]-=1;
                           remCount++;
                        }
                        if(zero==false && dig[5]==0){
                           dig[5]=1;
                           remCount--;
                        }
                     }else if(dig[i]>0){
                        dig[i]-=1;
                        remCount++;
                        if(zero==false && dig[5]==0){
                           dig[5]=1;
                           remCount--;
                        }
                     }
                  }
               }
         }else three=false;
      }else{
         three=true;
         if(twoCount>0){
            if(zero==false && (twoCount-dig[5])<1)three=false;
            else
               for(int i=1;i<=9;i++){
                  if(i%3==2&&dig[i]>0){
                     dig[i]-=1;
                     if(zero==false && dig[5]==0){
                        dig[5]=1;
                     }else break;
                  }
               }
         }else if(oneCount>1){
            //cout<<oneCount;
            for(int i=1;remCount<2;i++){
               if(i%3==1){
                  if(dig[i]>1){
                     dig[i]-=1;
                     remCount++;
                     //cout<<i<<" "<<remCount<<endl;
                     if(remCount==1){
                        dig[i]-=1;
                        remCount++;
                     }
                     //cout<<i<<" "<<remCount<<endl;
                  }else if(dig[i]>0){
                     dig[i]-=1;
                     remCount++;
                  }
               }
            }
         }else three=false;
      }
      if(three&&(five||zero)){
         if(allZero(dig)){
            putchar('0');
            putchar('\n');
            continue;
         }
         int times;
         for(int i=9;i>=0;i--){
            if(i==0)times=0;
            else if(i==5 && zero) times=dig[i];
            else if(i==5 && zero==false) times=dig[i]-1;
            else times=dig[i];
            for(int k=0;k<times;k++)printf("%d",i);
         }
         if(zero==false)times=1;
         else times=0;
         for(int k=0;k<times;k++)printf("%d",5);
         times=dig[0];
         for(int k=0;k<times;k++)printf("%d",0);
      }else if(zero) putchar('0');
      else printf("impossible");
      putchar('\n');
   }
   return 0;
}