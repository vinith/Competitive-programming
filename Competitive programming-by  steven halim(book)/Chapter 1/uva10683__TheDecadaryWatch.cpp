#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
#include<deque>
using namespace std;
int main(){
   //freopen("input.in","r",stdin);
   //freopen("output.out","w",stdout);
   string inp;
   int h,m,s,c,ans;
   double dec;
   while(getline(cin,inp)){
     h=m=s=c=0;
     h=(inp[0]-'0')*10+inp[1]-'0';
     m=(inp[2]-'0')*10+inp[3]-'0';
     s=(inp[4]-'0')*10+inp[5]-'0';
     c=(inp[6]-'0')*10+inp[7]-'0';
     dec=(h*360000.0)+(m*6000)+(s*100)+c;
     dec=dec*(10000000.0)/8640000;
     ans=(int)dec;
     c=ans%100; ans/=100;
     s=ans%100; ans/=100;
     m=ans%100; ans/=100;
     h=ans;
     printf("%d",h);
     if(m<10)putchar('0');
     printf("%d",m);
     if(s<10)putchar('0');
     printf("%d",s);
     if(c<10)putchar('0');
     printf("%d\n",c);
   }
   return 0;
}
