#include<iostream>
using namespace std;
int main()
{
	int n,i,arr[50],j,temp;
	cout<<"Enter the size(max.50):";
	cin>>n;
	cout<<"Enter"<<n<<"Numbers:";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"\n Sorting the array using Bubble sort technique.\n";
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\n Array sorted successfully!\n";
	cout<<"\n The new array is:\n";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
