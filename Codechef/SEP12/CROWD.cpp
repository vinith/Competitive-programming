using namespace std;
#include<iostream>
#include<cstdio>
#define mod 1000000007
typedef unsigned long long ull;
class matrix
{
public:
   ull ma[3][3];
   matrix()
   {
      ma[0][0]=ma[0][2]=ma[1][0]=ma[1][1]=0;
      ma[0][1]=ma[1][2]=ma[2][0]=ma[2][1]=ma[2][2]=1;
   }
   matrix mul(matrix a,matrix b)
   {
      matrix ret;
      for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
            ret.ma[i][j]=0;
            //cout<<"( ";
            for(int k=0;k<3;k++){
               ret.ma[i][j]+=(a.ma[i][k]*b.ma[k][j]);
               //cout<<a.ma[i][k]<<"*"<<b.ma[k][j]<<"+";
            };
            ret.ma[i][j]%=mod;
            //cout<<")"<<ret.ma[i][j]<<"   ";
         }
         //cout<<endl;
      }
      return ret;
   }
   matrix exp(matrix a,ull p)
   {
      if(p==0){
         matrix temp;
         for(int i=0;i<3;i++)for(int j=0;j<3;j++)temp.ma[i][j]=1;
         return temp;
      }
      if(p==1)
         return a;
      if(p%2==0)
         return exp(mul(a,a),p/2);
      else
         return mul(a,exp(mul(a,a),(p-1)/2));
   }
   ull trib(ull n)
   {
      matrix s;
      s=exp(s,n);
      //for(int i=0;i<3;i++){for(int j=0;j<3;j++){cout<<s.ma[i][j]<<" ";}cout<<"\n";}
      return s.ma[2][2];
   }
};
unsigned long long fastEx(ull a,ull p){
   if(p==0)return 1ULL;
   else if(p==1) return a;
   else if(p%2) return (a*(fastEx((a*a)%mod,(p-1ULL)/2ULL))%mod);
   else return fastEx((a*a)%mod,p/2ULL);
}
int main()
{
   int t;
   ull n,tr,ex;//nth term
   scanf("%d",&t);
   while(t--){
      scanf("%llu",&n);
      matrix v;
      if(n==1||n==2)printf("0\n");
      else{     
         n+=1;
         tr=v.trib(n)%mod;
         ex=fastEx(2ULL,n-1);
         if(ex<tr){
            ex+=mod;
         }
         printf("%llu\n",(ex-tr)%mod);
      }
   }
   return 0;
}