#include<bits/stdc++.h>
using namespace std;
int selectionsort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
int main()
{
	int n,key;
	cout<<"enter size of an array ";
	cin>>n;
	int arr[n];
	cout<<endl<<"enter elements ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	selectionsort(arr,n);
	cout<<"after sorting  ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
