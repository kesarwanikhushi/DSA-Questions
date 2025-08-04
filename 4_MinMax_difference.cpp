#include <bits/stdc++.h>
#include<vector>
using namespace std;

int minmaxdiff(vector<int> &arr, int k){
  int n= arr.size();
  sort(arr.begin(),arr.end());
  int res= arr[n-1]-arr[0];

  for(int i=0; i<n; i++){
    if(arr[i]-k<0)
      continue;

    int minh= min(arr[0]+k,arr[i]-k);
    int maxh= max(arr[i-1]+k,arr[n-1]-k);

    res=min(res,maxh-minh);
  }
  return res;
}

int main(){
  int k,n;
  cout<<"Enter the value to be minimized: ";
  cin>>k;
  cout<<"Enter the number of elements: ";
  cin>>n;
  vector<int> arr(n);
  cout<<"enter the "<<n<<" elements: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int ans= minmaxdiff(arr,k);
  cout<<"Difference is: "<<ans;
}
