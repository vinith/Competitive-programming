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
   int t,l,temp;
   scanf("%d",&t);
   char s[20001];
   bool change;
   while(t--){
      int a[10]={0},b[10]={0},c[10]={0};
      int a7,b7,a4,b4,ah,bh;
      a7=b7=a4=b4=0;
      scanf("%s",s);
      l=strlen(s);
      for(int i=0;i<l;i++)a[s[i]-'0']++;
      scanf("%s",s);
      for(int i=0;i<l;i++)b[s[i]-'0']++;
      change=true;
      a7=a[6]+a[5];
      b7=b[6]+b[5];
      a4=a[3]+a[2]+a[1]+a[0];
      b4=b[3]+b[2]+b[1]+b[0];
      //a[6]=a[5]=a[3]=a[2]=a[1]=0;
      //b[6]=b[5]=b[3]=b[2]=b[1]=0;
      
      //7a with 6,5b
      temp=min(a[7],b7);
      c[7]+=temp;
      a[7]-=temp; b7-=temp;
      
      //7b with 6,5a
      temp=min(b[7],a7);
      c[7]+=temp;
      b[7]-=temp; a7-=temp;
      
      //7a with smaller than 4b
      temp=min(a[7],b4);
      c[7]+=temp;
      a[7]-=temp; b4-=temp;
      
      //7a with 4b
      temp=min(a[7],b[4]);
      c[7]+=temp;
      a[7]-=temp; b[4]-=temp;
      
      //7b with smaller than 4a
      temp=min(b[7],a4);
      c[7]+=temp;
      b[7]-=temp; a4-=temp;
      
      //7b with 4a
      temp=min(b[7],a[4]);
      c[7]+=temp;
      b[7]-=temp; a[4]-=temp;
      
      //7a with 7b
      temp=min(a[7],b[7]);
      c[7]+=temp;
      a[7]-=temp; b[7]-=temp;
      
      //4a with smaller than 4b
      temp=min(a[4],b4);
      c[4]+=temp;
      a[4]-=temp; b4-=temp;
      
      //4b with smaller than 4a
      temp=min(b[4],a4);
      c[4]+=temp;
      b[4]-=temp; a4-=temp;
      
      //4a with 4b
      temp=min(a[4],b[4]);
      c[4]+=temp;
      
      temp=c[7];
      for(int i=0;i<temp;i++)putchar('7');
      temp=c[4];
      for(int i=0;i<temp;i++)putchar('4');
      putchar('\n');
   }
   return 0;
}