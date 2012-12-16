#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
long long toDecimal(char *s){
   char dec[200],times,fill,top=0;
   long long ret;
   for(int i=0;s[i]!=0;i+=2){
      times=s[i];
      fill=s[i+1];
      for(int k='0';k<times;k++)dec[top++]=fill;
   }
   dec[top]='\0';
   ret=atoll(dec);
   return ret;
}
void toRlm(long long num){
   char s[200],ret[500],val;
   int streak=1,top=0;
   sprintf(s,"%lld",num);
   val=s[0];
   for(int i=1;s[i]!='\0';i++){
      if(s[i]==val){
         streak++;
         if(streak==10){
            ret[top++]='9';
            ret[top++]=val;
            streak=1;
         }
      }
      else{
         ret[top++]='0'+streak;
         ret[top++]=val;
         streak=1;
         val=s[i];
      }
   }
   ret[top++]='0'+streak;
   ret[top++]=val;
   ret[top]='\0';
   printf("%s\n",ret);
}
int main(){
   char a[200];
   char b[200],opr;
   long long num1,num2;
   while(scanf("%s %c %s",a,&opr,b)>0){
      //cout<<opr;
      num1=toDecimal(a);
      num2=toDecimal(b);
      printf("%s %c %s = ",a,opr,b);
      if(opr=='+')toRlm(num1+num2);
      else if(opr=='-')toRlm(num1-num2);
      else if(opr=='*')toRlm(num1*num2);
      else if(opr=='/')toRlm(num1/num2);
   }   
   return 0;
}