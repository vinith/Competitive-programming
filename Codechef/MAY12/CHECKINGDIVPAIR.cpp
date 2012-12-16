using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<math.h>
typedef long long ll;
#define start 10000
#define limit 1000000000
ll findpairs(int N, int M)
{
	ll answer=0;
	for(int r1=max(1,M-N);r1<=M-1;)
	{
		int r2=M-r1;
		if(r1>N || r2>N)
			break;
		ll x = (N-r1)/M+1;
		ll y = (N-r2)/M+1;
		int r1next = min(N+1ll,min(N-(x-1)*M+1,(y+1)*M-N));
		r1next = min(M, r1next);
		answer += (r1next-r1) * x * y;
		r1=r1next;
	}
	if(N>=M)
	{
		ll tmp = (N-M)/M+1;
		answer += tmp*tmp;
		answer -= tmp;
	}
	if(M%2==0 && N>=M/2)
	{
		answer -= (N-(M/2))/M+1;
	}
	//return 0;
	return answer/2;
}
bool error=false;
int main()
{
	int t;
	ll n,m,left,right,terms,nterm,miss;
	ll p1,p2,tp,sum1,sum2,l1,l2,nz,s1,s2,m1,m2,p,s;
	ll divpair;
	//scanf("%d",&t);
	t=1000000000;
	while(!error){
		//scanf("%lld %lld",&n,&m);
		//for(ll n=start;n<=limit;n++){
		//for(ll m=start;m<=limit;m++){
		//cout<<".";
		//right
		m=rand()%limit+2;
		n=rand()%limit+2;
		if(m>((2*n)-1)){
			divpair=findpairs(n,m);
			if(divpair!=0){
				error=true;
				printf("%lld %d n=%lld m=%lld\n",divpair,0,n,m);
			}
			continue;
		}
		left=right=0;
		terms=n-m+1;
		if(terms<0){
			right=0;
			goto left;
		}
		nterm=ceil((float)terms/m);
		right=m*(nterm*(nterm+1))*0.5;
		miss=nterm*m-(terms);
		right-=(miss*nterm);
left:
		//left
		if(m%2==0){
			p=m/2;
			nz=(n-1)-(((m+2)*0.5)-2);
			if(nz%p==0)miss=0;
			else miss=p-(nz%p);
			nterm=ceil((float)nz/p);
			s=nterm*(nterm+1)*0.5*p;
			s-=(nterm*miss);
			//if(m==2)s+=nterm;
			left=s;
		}
		else{
			p1=ceil((float(m)/2));
			p2=p1-1;
			tp=p1+p2;
			nz=(n-1)-(((m+1)/2)-2);
			miss=nz%tp;
			nterm=nz/tp;
			if(miss==0){
				l1=(1+((nterm)-1)*2);
				l2=(2+((nterm)-1)*2);
				s1=((1+l1)*0.5*nterm)*p1;
				s2=((2+l2)*0.5*nterm)*p2;
				left=s1+s2;
			}
			else if(miss==p1){
				l1=(1+((nterm+1)-1)*2);
				l2=(2+((nterm)-1)*2);
				s1=((1+l1)*0.5*(nterm+1))*p1;
				s2=((2+l2)*0.5*(nterm))*p2;
				left=s1+s2;

			}
			else if(miss>p1){
				l1=(1+((nterm+1)-1)*2);
				l2=(2+((nterm+1)-1)*2);
				s1=((1+l1)*0.5*(nterm+1))*p1;
				s2=((2+l2)*0.5*(nterm+1))*p2;
				m2=p2-(miss-p1);
				s2-=(l2*m2);
				left=s1+s2;		
			}
			else if(miss<p1){
				l1=(1+((nterm+1)-1)*2);
				l2=(2+((nterm)-1)*2);
				s1=((1+l1)*0.5*(nterm+1))*p1;
				s2=((2+l2)*0.5*(nterm))*p2;
				m1=p1-(miss);
				s1-=(l1*m1);
				left=s1+s2;
			}
		}
		divpair=findpairs(n,m);
		if(divpair!=(left-right)){
			printf("%lld %lld n=%lld m=%lld\n",divpair,left-right,n,m);
			error=true;
		}
		//cout<<".";
	}

	//}
	//}
	cout<<"all done"<<endl;
	return 0;
}
