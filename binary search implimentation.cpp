
#include<iostream>
using namespace std;


int find(int arr[],int n,int x){
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==x){
			return mid;
		}
		
		if(x>arr[mid]){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	cout<<find(arr,n,x);
}
