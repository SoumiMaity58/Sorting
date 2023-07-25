#include<iostream>
using namespace std;
int main()
{
	int arr[50],tot,i,j,k,elem,index;
	cout<<"Enter the size for array:";
	cin>>tot;
	cout<<"Enter"<< tot <<"Array elements:";
	for(i=0;i<tot;i++)
	cin>>arr[i];
	for(i=1;i<tot;i++)
	{
		elem=arr[i];
		if(elem<arr[i-1])
		{
			for(j=0;j<=i;j++)
			{
				if(elem<arr[j])
				{
					index=j;
					for(k=i;k>j;k--)
					arr[k]=arr[k-1];
					break;
				}
			}
		}
		else
		continue;
		arr[index]=elem;
	}
	cout<<"\n The new Array (sorted array):\n";
	for(i=0;i<tot;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
