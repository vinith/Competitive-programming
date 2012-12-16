using namespace std;
#include<iostream>
#include<cstdio>
#include<map>
#define mod 1000000007
int main(){
  int t,n,currentPos,median,requiredPos;
  long long a,b,c,sum,temp;
  scanf("%d",&t);
  while(t--){
    long long F[200000];
    int it;
    F[1]=1;
    sum=median=1;
    scanf("%lld %lld %lld %d",&a,&b,&c,&n);
    if(n==1)printf("1\n");
    else if(n==2)printf("%lld",(((a*median)+(b*2)+c))%mod);
    else{
      //cout<<"1"<<endl;
      it=1;
      temp=((a*median)+(b*2)+c)%mod;
      //cout<<temp<<endl;
      F[2]=temp;
      sum+=temp;
      for(int i=3;i<=n;i++){
        requiredPos=(i-1)/2;
        if((i-1)%2!=0)requiredPos++;
        //cout<<currentPos<<"--"<<requiredPos<<endl;
        //for(int k=currentPos;k<requiredPos;k++)it++;
        it=requiredPos;
        median=F[it];
        temp=((a*median)+(b*i)+c)%mod;
        sum+=temp;
        F[i]=temp;
        //cout<<temp<<endl;
      }
    }
    printf("%lld\n",sum);
  }
  return 0;
}