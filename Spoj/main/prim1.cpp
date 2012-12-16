#include<iostream>
using namespace std;
void prime_between(int m,int n)
{
	int status=0,count=1;
	int prime_list[1000000]={2,3};
	if(prime_list[count]<m)
	{

		for(int i=4;prime_list[count]<m;i++)
		{
			status=0;
			for(int k=0;k<count;k++)
			{
				if(i%prime_list[k]==0)
				{
					status=1;
					break;
				}
			}
			if(status==0)
			{        count++;
				prime_list[count]=i;
				//cout<<i<<endl;
			}
		}

	}
	if(m==1)
	{
		cout<<"2\n"<<3<<endl;
		m=4;
	}
	for(int i=m;i<=n;i++)
	{
		status=0;
		for(int k=0;k<count;k++)
		{
			if(i%prime_list[k]==0)
			{
				status=1;
				break;
			}
		}
		if(status==0)
		{        count++;
			prime_list[count]=i;
			cout<<i<<endl;
		}
	}
}
int main()
{
	int t,m,n;
	cin>>t;
	while(t--)
	{
		cin >>m>>n;
		prime_between(m,n);
		cout<<endl;
	}

	return 0;
}
