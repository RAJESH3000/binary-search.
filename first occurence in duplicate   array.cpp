#include<bits/stdc++.h>
using namespace std;

int find(int arr[],int n,int x){
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            ans=mid;
            high=mid-1;
            continue;
        }
        
        if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
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