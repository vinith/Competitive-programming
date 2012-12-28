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
   int t,n,m,x,y;
   scanf("%d",&t);
   while(t--){
     scanf("%d %d",&n,&m);
     n-=2;m-=2;
     x=n/3;
     y=m/3;
     if(n%3)x++;
     if(m%3)y++;
     printf("%d\n",x*y);
   }
   return 0;
}
