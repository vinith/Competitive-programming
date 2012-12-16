#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
  int t,sum;
  char c;
  bool five,three,flag;
  scanf("%d\n",&t);
  while(t--){
    int num[10]={0};
    five=three=flag=false;
    sum=0;
    while((c=getchar()) && c>='0' && c<='9'){
      num[c-'0']++;
      sum+=(c-'0');
    }
    if(num[0]>0||num[5]>0){
      //for(int i=0;i<=9;i++){
        //if(i!=0 && i!=5 && num[i]>0){
          five=true;
          //break;
        //}
      //}
      if(five==false)printf("impossible\n");
      else{
        if(sum%3==1){
          for(int i=1;i<=9;i++){
            if(num[i]>0 && i%3==1){
              num[i]--;
              three=true;
              break;
            }
          }
        }else if(sum%3==2){
          for(int i=1;i<=9;i++){
            if(num[i]>0 && i%3==2){
              num[i]--;
              three=true;
              break;
            }
          }
          if(three==false){
            int rem=0;
            for(int i=1;i<=9&&rem!=2;i++){
              if(num[i]>1 && i%3==1){
                if(rem==0) num[i]-=2;
                else if(rem==1) num[i]-=1;
                rem=2;
              }else if(num[i]>0 && i%3==1){
                num[i]-=1;
                rem++;
              }
            }
          }
        }else if(sum%3==0)three=true;
        if(three==false)printf("impossible\n");
        else{
          for(int i=9;i>=1;i--){
            if(i!=5){
              int times=num[i];
              for(int k=0;k<times;k++){printf("%d",i);flag=true;}
            }
          }
          int times=num[5];
          for(int k=0;k<times;k++){printf("%d",5);flag=true;}
          times=num[0];
          if(sum<3||flag==false)putchar('0');
          else for(int k=0;k<times;k++)printf("%d",0);
          putchar('\n');
        }
      }
    }else printf("impossible\n");
  }
  return 0;
}