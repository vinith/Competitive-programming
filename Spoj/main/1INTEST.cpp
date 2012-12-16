using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>
#define size 1000000
int main()
{  
  long long t,d,n,counter=0;
  char buf[size];
  fread(buf,1,size-1,stdin);
  char *inp;
  inp=strtok(buf," \n");
  sscanf(inp,"%lld",&t);
  inp=strtok(NULL," \n");  
  sscanf(inp,"%lld",&d);
  //printf("%ld %ld\n",t,d);  
  inp=strtok(NULL,"\n\0");
  while(inp!=NULL){
    sscanf(inp,"%lld",&n);
    //printf("%ld\n",n);
    if(n%d==0)counter++;    
    inp=strtok(NULL,"\n\0"); 
  }
  printf("%lld",counter);
}
