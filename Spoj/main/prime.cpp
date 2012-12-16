#include<iostream>
using namespace std;
int main()
{       
	int status=0;
	int count =1;
	int prime_list[1000000]={2,3};
	int m,n,t;
	cin>>t;
	for(int z=0;z<t;z++)
	{
		/*cout<<endl;
		for(int x=0;x<count;x++)
		{
			cout<<prime_list[x];
		}
		cout<<endl;*/
		cin>>m>>n;
		
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
		cout<<endl;

	}
	return 9;
}
