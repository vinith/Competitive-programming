#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char num[30];
int sum[27][27];
int len,count,Case=0;
void solve(int prevSum,int currPos){
  if(currPos==len+1)
    count+=1;
  else{
    //printf("solving for prevSum=%d currPos=%d\n",prevSum,currPos);
    for(int i=currPos;i<=len;i++){
      if(sum[currPos][i]>=prevSum){
        //printf("%d %d %d\n",currPos,i,sum[currPos][i]);
        solve(sum[currPos][i],i+1);
      }
    }
  }
}
int main(){
  while(scanf("%s",num)&&num[0]!='b'){
    len=strlen(num)-1;
    memset(sum,0,sizeof(sum));
    count=0;
    for(int i=0;i<=len;i++)
      for(int k=i;k<=len;k++)
        for(int p=i;p<=k;p++)
          sum[i][k]+=num[p]-'0';
    /*for(int i=0;i<=len;i++)
      for(int k=i;k<=len;k++)
        printf("%d %d %d\n",i,k,sum[i][k]);
    */
    solve(0,0);
    printf("%d. %d\n",++Case,count);
  }
  return 0;
}