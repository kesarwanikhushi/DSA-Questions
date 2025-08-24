#include <bits/stdc++.h>
using namespace std;

int rotatearray(vector<int> &arr){
  int temp;
  int n = arr.size();
  temp= arr[n-1];
  for(int i=n-1; i>0; i--){
    arr[i] = arr[i - 1];
  }
  arr[0]=temp;
  return n;
}
int main(){
  vector<int> arr={1,2,3,4,5};
  int res= rotatearray(arr);
  for (int i=0; i<res; i++){
    cout<<arr[i]<<" ";
  }
}

