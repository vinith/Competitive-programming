using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<math.h>

int main()
{
	int t;
	double a,b,c,d,s;
	for(scanf("%d",&t);t--;){
		scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
		s=a+b+c+d;
		s/=2;
		s=(s-a)*(s-b)*(s-c)*(s-d);
		s=sqrt(s);
		printf("%lf\n",s);
	}

	return 0;
}
