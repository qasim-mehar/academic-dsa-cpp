# include <iostream>
using namespace std;
int main ()
{
	int size;
	cout<<"Enter size of array";
	cin>>size;
	int arr[size];
	int sum=0;
	for(int i=0;  i<size;i++)
	 
	{cout<<"Enter value:";
	cin>>arr[i];
	sum=sum+arr[i];
	}
	
	cout<<"sum of values of array="<<sum;
	
	
	return 0;
	
}
