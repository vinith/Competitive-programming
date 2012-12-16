using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<math.h>
#define pi 3.14159265
int main()
{
	for(float l;scanf("%f",&l)&&l>0;){
		l=l*l/(2*pi);
		//t/=(2*pi);
		//floorf(l*=100)/100;
		printf("%.2f\n",l);
	}
	return 0;
}
