#include<bits/stdc++.h>
using namespace std;

int kminmax(vector<int> &arr, int n){
  int s= arr.size();
  sort(arr.begin(),arr.end());
    cout<<n<<"th minimum element is: ";
    cout<< arr[n-1];
    cout<<endl<<n<<"th maximum element is: ";
    return arr[s-n];
  }
int main(){
  int n,k;
  cout<<"Enter the value of K(min and max to be found): ";
  cin>>k;
  cout<<"Enter the number of elements in array: ";
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter the numbers: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int ans=kminmax(arr,k);
  cout<<ans;
}
