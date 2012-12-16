#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
using namespace std;
long long count=0L;
//int tree[1000001];
//vector<int>tree;
map<long long,int> tree;
void insert(long long n,int data){
  //cout<<n<<" ";
  if(tree[n]==0){
    tree[n]=data;
  }else if(tree[n]>data){
    count++;
    insert(2*n,data);
  }else{
    count++;
    insert(2*n+1,data);
  }  
}
int main(){
  int n,num;
  scanf("%d",&n);
  while(n--){
    scanf("%d",&num);
    insert(1,num);
    //cout<<endl;
    printf("%lld\n",count);
  }
  return 0;
}