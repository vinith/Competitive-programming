#include<iostream>
using namespace std;
int main()
{
	int n,m;
	int set=1;
	char str[81];
	cin>>n;
	while(n--)
	{
		cin>>m>>str;
		cout<<set<<" ";
		set++;
		for(int i=0;str[i]!='\0';i++)
		{
			if(i!=m-1)
			{
				cout<<str[i];
			}

		}
		cout<<endl;
	}
	return 0;
}


