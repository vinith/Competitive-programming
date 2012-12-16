using namespace std;
#include<iostream>
#include<cstdio>
#include<cmath>
#define lim 1000
bool squares[1000001];
void pre(){
 for(int i=1;i<=lim;i++)squares[i*i]=true; 
}
int main(){
  pre();
  int n,a,b,count;
  scanf("%d",&n);
  while(n--){
    scanf("%d %d",&a,&b);
    count=0;
    for(int i=a;i<=b;i++){
      if(squares[i])count++;
    }
    printf("%d\n",count);
  }
  return 0;
}