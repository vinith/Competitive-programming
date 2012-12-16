#include<iostream>
using namespace std;
long long primes[100000],count=0;
long long  binary_search(int numb)
{        cout<<"inside search function";
	int i=0;
	while(1)
	{
		if(primes[i]>=numb)
		{
			return i;

		}	
		i++;

	}	

}
int main()
{
	int t;
	cin>>t;
	long long m[t],n[t];
	long long max,index;
	t--;
	cin>>m[0]>>n[0];
	max=n[0];
	for(int i=0;i<t;i++)
	{
		cin>>m[i]>>n[i];
		if(n[i]>max)
		{max=n[i];}
	}
	int status=0;
	primes[0]=2;
	for(int i=3;i<=max;i++)
	{
		for(int k=0;k<=count;k++)
		{          
			status=0;
			if(primes[k]*primes[k]>i)
			{
				break;
			}
			if(i%primes[k]==0)
			{     

				status=1;
				break;
			}


		}
		if(status==0)
		{
			count++;
			primes[count]=i;
			// cout<<primes[count]<<"Added at position:"<<count<<endl;
		}

	}
	cout<<"T"<<t;
	for(int i=0;i<=t;i++)
	{         

		if(m[i]==1)
		{
			index=0;
		}
		else
		{
			index=binary_search(m[i]);
		}
		while(1)
		{        
			//cout<<primes[index]<<endl;
			cout<<index;
			index++;
			if(primes[index]>n[i])
			{
				break;
			}
		}
		cout<<endl;
	}      
	return 0;
}
