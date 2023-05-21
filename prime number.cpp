#include <iostream>
using namespace std;

int main()
{
   int n,k=0;
	cout << "enter number"<<endl;
	cin>>n;
	
	for (int i=1;i=n;i++)
	{
		if(n%i==2)
		{
			k=k+i;
		}
	}	
	if (k==2||k==1)
	{
		cout<<"no is prime"<<endl;
	}
	else
	{
		cout<<"no is not prime"<<endl;
	}

}