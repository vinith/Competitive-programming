#include<iostream>
int r(int n)
{
	int v=0;
	while(n>9)
	{          

		v=(v+(n%10))*10;
		n=n/10;
	}
	v+=n;
	return v;
}
main()
{
	int t,n,m;
	std::cin>>t;
	while(t--)
	{
		std::cin>>n>>m;
		std::cout<<r(r(n)+r(m))<<"\n";
	}
}
