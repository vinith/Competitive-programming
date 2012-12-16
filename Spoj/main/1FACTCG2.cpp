using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<math.h>
#include<vector>
#define lim 10000001
#define sq 3165
bool prime[10000001]={false};
void preprocess()
{
  prime[0]=prime[1]=true;
  for(int i=2;i<=sq;i++){
    if(!prime[i]){
      for(int k=i*i;k<=lim;k+=i)prime[k]=true;
    }    
  }
  //for(int i=4000;i<5000;i++){if(!prime[i])cout<<i<<endl;}
}
int main()
{
  preprocess();
  int num;
  while(scanf("%d",&num)!=EOF){
    printf("1");
    //if(!prime[num]){printf(" x %d",num);}
    //else{
    for(int i=2;num>1;i++){
      if(!prime[i]){
	if(!prime[num]){printf(" x %d",num);break;}
	if(num%i==0){
	  while(num%i==0){printf(" x %d",i);num/=i;}
	}
      }
    }
    //}
    printf("\n");
  }
  return 0;
}