# include <iostream>
using namespace std;
int main ()
{
	int size;
	cout<<"Enter size of array";
	cin>>size;
	int val[size];squr[size];
	for(int i=0;i<size;i++)
	{
	cout<<"Enter value:";
	cin>>val[i];
	squr[i]=val[i]*val[i];
	
	}
	for(int i=0;i<size;i++)
	{cout<<"value="<,val[i]<<"/tsquare="<<squr[i]
	
	}
	return 0;
	
}
