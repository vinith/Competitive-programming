#include<iostream>
main(){
	int t,s=0,n;
	std::cin>>t;
	while(t--&&std::cin>>n)
	{
		n>0?s+=n:1;
	}	
	std::cout<<s;
}
