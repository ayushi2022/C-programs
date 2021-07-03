#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
	int s=0,e=n;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(arr[mid]==key){
			return mid+1;
		}
		else if(arr[mid]>key){
			e= mid+1;
		}
		else{
			s=mid+1;
		}
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
	cout<<endl;
	cout<<binarysearch(arr,n,key);
}
