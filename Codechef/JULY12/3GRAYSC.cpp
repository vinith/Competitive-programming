using namespace std;
#include<iostream>
#include<cstdio>
#include<map>
int main(){
  int n,k1,k2,ind;
  bool found=false;
  long long temp,n1;
  map <long long,bool> val;
  map<long long,map<int,int> >keY;
  map<long long,int> top;
  //map<long long,map<int,int> >::iterator it;
  scanf("%d",&n);
  long long arr[n];
  for(int i=0;i<n;i++)
    scanf("%lld",&arr[i]);
  for(int i=0;i<n;i++){
    n1=arr[i];
    for(int k=i+1;k<n;k++){
      temp=n1^arr[k];
      if(val.find(temp)==val.end()){
        val[temp]=true;
        keY[temp][0]=i;keY[temp][1]=k;
        top[temp]=2;
        //printf("Xored value=%lld   index1=%d  index2=%d \n",temp,i,k);
      }
      else{
        ind=top[temp];
        for(int p=0;p<ind;p+=2){
          k1=keY[temp][p];k2=keY[temp][p+1];
          if((k1!=k)&&(k2!=k)&&(k1!=i)&&(k2!=i)){
            cout<<i<<" "<<k<<" "<<k1<<" "<<k2<<endl;
            //found=true;goto op;
          }
        }
        keY[temp][top[temp]++]=i;
        keY[temp][top[temp]++]=k;
      }
    }
  }
  op:
  if(found)printf("Yes\n");
  else printf("No\n");
  return 0;
}