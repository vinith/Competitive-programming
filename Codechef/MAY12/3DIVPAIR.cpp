using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<math.h>
typedef long long ll;
int main()
{
	int t;
	ll n,m,left,right,terms,nterm,miss;
	ll p1,p2,tp,sum1,sum2,l1,l2,nz,s1,s2,m1,m2,p,s;
	scanf("%d",&t);
	while(t--){
		scanf("%lld %lld",&n,&m);
		//cin>>n>>m;
		//right
		if(m>((2*n)-1)){
			printf("0\n");
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
		//cout<<right<<endl;
left:
		//left
		if(m%2==0){
			p=m/2;
			nz=(n-1)-(((m+2)*0.5)-2);
			//cout<<nz<<endl;


			if(nz%p==0)miss=0;
			else miss=p-(nz%p);
			//error here

			nterm=ceil((float)nz/p);


			//cout<<nterm<<endl;
			//cout<<miss<<endl;
			s=nterm*(nterm+1)*0.5*p;
			s-=(nterm*miss);
			//if(m==2)s+=nterm;
			left=s;
			//cout<<left<<endl;
		}
		else{
			p1=ceil((float(m)/2));
			p2=p1-1;
			tp=p1+p2;
			nz=(n-1)-(((m+1)/2)-2);
			miss=nz%tp;
			nterm=nz/tp;
			//cout<<p1<<" "<<p2<<" "<<miss<<endl;
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
                                //cout<<s1<<" "<<s2<<" "<<m2<<endl;
                                left=s1+s2;

			}
			else if(miss>p1){
				l1=(1+((nterm+1)-1)*2);
				l2=(2+((nterm+1)-1)*2);
				s1=((1+l1)*0.5*(nterm+1))*p1;
				s2=((2+l2)*0.5*(nterm+1))*p2;
				m2=p2-(miss-p1);
				//cout<<s1<<" "<<s2<<" "<<m2<<endl;
				s2-=(l2*m2);
				left=s1+s2;		
			}
			else if(miss<p1){
				l1=(1+((nterm+1)-1)*2);
				l2=(2+((nterm)-1)*2);
				s1=((1+l1)*0.5*(nterm+1))*p1;
				s2=((2+l2)*0.5*(nterm))*p2;
				m1=p1-(miss);
				//cout<<s1<<" "<<s2<<" "<<m1<<endl;
				s1-=(l1*m1);
				left=s1+s2;
			}
		}
		//cout<<left<<endl;
		//cout<<left<<" "<<right<<endl;
		printf("%lld\n",left-right);
		//cout<<left-right<<endl;
	}
	return 0;
}
