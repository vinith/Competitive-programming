#include<iostream>
#include<string>
using namespace std;
int main()
{
	string check;
	cout<<"Ready"<<endl;
	while(1)
	{
		getline(cin,check,'\n');
		if(!check.compare("  "))
		{
			break;
		}
		else if(!check.compare("db")||!check.compare("bd"))
		{
			cout<<"Mirrored pair"<<endl;
		}
		else if(!check.compare("pq")||!check.compare("qp"))
		{
			cout<<"Mirrored pair"<<endl;
		}
		else
		{
			cout<<"Ordinary pair"<<endl;
		}

	}
	return 0;
}
