#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		   return i+1;
	}
	return false;
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
	cout<<endl<<"enter elment to be search ";
	cin>>key;
	cout<<endl<<linearsearch(arr,n,key);
}
