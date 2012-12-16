using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
void fact(int n)
{
  printf("1");
  for(int i=2;n>1;i++){
    if(n%i==0){
    while(n%i==0){
      printf(" x %d",i);    
      n/=i; 
    }
  }
  }
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