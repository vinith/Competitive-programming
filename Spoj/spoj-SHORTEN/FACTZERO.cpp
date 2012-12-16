#include<iostream>
main()
{
	int t,n,c;
	std::cin>>t;
	while(t--){
		std::cin>>n;
		for(c=0;n>=5;n/=5,c+=n){}
		std::cout<<c<<"\n";
	}
}
