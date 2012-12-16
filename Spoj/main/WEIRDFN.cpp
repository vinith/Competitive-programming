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
    multimap<long long,bool> F;
    multimap<long long,bool>::iterator it;
    F.insert(pair<long long,bool>(1,true));
    sum=1;
    currentPos=median=1;
    scanf("%lld %lld %lld %d",&a,&b,&c,&n);
    if(n==1)printf("1\n");
    else if(n==2)printf("%lld",(((a*median)+(b*2)+c))%mod);
    else{
      //cout<<"1"<<endl;
      it=F.begin();
      temp=((a*median)+(b*2)+c)%mod;
      //cout<<temp<<endl;
      F.insert(pair<long long,bool>(temp,true));
      sum+=temp;
      for(int i=3;i<=n;i++){
        requiredPos=(i-1)/2;
        if((i-1)%2!=0)requiredPos++;
        //cout<<currentPos<<"--"<<requiredPos<<endl;
        for(int k=currentPos;k<requiredPos;k++)it++;
        currentPos=requiredPos;
        median=it->first;
        temp=((a*median)+(b*i)+c)%mod;
        sum+=temp;
        F.insert(pair<long long,bool>(temp,true));
        //cout<<temp<<endl;
      }
    }
    printf("%lld\n",sum);
  }
  return 0;
}