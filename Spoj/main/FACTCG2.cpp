using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
void fact(int n)
{
  printf("1");
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
    while(n%i==0){
      printf(" x %d",i);    
      n/=i; 
    }
  }
  }
  if(n>1)printf(" x %d",n);
  printf("\n");
}
int main()
{
 int n;
 while(scanf("%d",&n)!=EOF){
   fact(n);
 }
return 0;
}