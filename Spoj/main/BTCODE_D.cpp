using namespace std;
#include<iostream>
#include<cstdio>

int main(){
  int t,m,n;
  long long A[110][110],B[110][110];
  long long C[110][110],ans,currentMax;
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)for(int k=0;k<n;k++)scanf("%lld",&A[i][k]);
    for(int i=0;i<m;i++)for(int k=0;k<n;k++)scanf("%lld",&B[i][k]);
    for(int i=0;i<m;i++)for(int k=0;k<n;k++)scanf("%lld",&C[i][k]);
    ans=0;
    for(int i=0;i<m;i++){
      //solve for ith restaurant
      currentMax=0;
      for(int k=0;k<n;k++){
        currentMax=max(currentMax,min(A[i][k],B[i][k])*C[i][k]);
        //cout<<currentMax<<endl;
      }
      ans+=currentMax;
    }
    printf("%lld\n",ans);
  }  
}