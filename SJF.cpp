#include<iostream>

using namespace std;

void main()
{
	//four process
	// p1 p2 p3 p4
	int arr[4];

	cout<<"enter the values of burst time : "<<"\n";
	for(int i=0;i<4;i++)
	{
		cin>>arr[i];
	}
	//take the smallest value
	for(int i=0;i<4;i++)
{	
		for(int j=i+1;j<4;j++)
	{
		if(arr[i]>arr[i+1])
		{
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}	
	}
}	
	for(int i=0;<4;i++)
	cout<<arr[i]<<" ";

}
