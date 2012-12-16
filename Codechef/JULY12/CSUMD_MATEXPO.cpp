using namespace std;
#include<iostream>
#include<cstdio>
#define mod 1000000007
#define inverse2 500000004
typedef long long ull;
inline long long read(){
  char temp;
  long long x=0;
  temp=getchar_unlocked();
  while(temp<48)temp=getchar_unlocked();
  x+=(temp-'0');
  temp=getchar_unlocked();
  while(temp>=48){
    x=(x<<3)+(x<<1);
    x+=(temp-'0');
    temp=getchar_unlocked();
  }
  return x; 
}
class matrix
{
public:
  ull a,b,c,d;
  matrix()
  {
    a=2;b=2;
    c=1;
    d=0;
  }
  matrix mul(matrix a,matrix b)
  {
    matrix ret;
    ret.a=(a.a*b.a)%mod+(a.b*b.c)%mod;
    ret.b=(a.a*b.b)%mod+(a.b*b.d)%mod;
    ret.c=(a.c*b.a)%mod+(a.d*b.c)%mod;
    ret.d=(a.c*b.b)%mod+(a.d*b.d)%mod;
    return ret;
  }
  matrix exp(matrix a,ull p)
  {
    if(p==0){
      matrix temp;
      temp.a=temp.b=temp.c=temp.d=1;
      return temp;
    }
    if(p==1)
      return a;
    if(p%2==0)
      return exp(mul(a,a),p/2);
    else
      return mul(a,exp(mul(a,a),(p-1)/2));
  }
  ull f(ull n)
  {
    matrix s;
    s=exp(s,n);
    //cout<<s.a<<" "<<s.b<<" "<<s.c<<" "<<s.d<<endl;
    return s.a;
  }
};
int main()
{
  int t;
  ull n;//nth term
  scanf("%d",&t);
  while(t--){
    matrix v;
    n=read();
    printf("%lld\n",(v.f(n)*inverse2)%mod);
  }
  return 0;
}