#include <iostream>
#include<vector>
using namespace std;

int reversearray(vector<int> &arr){
  int n = arr.size();
  vector<int> temp(n);
  for(int i=0; i<n; i++){
    temp[i]=arr[n-i-1];
  }
  for(int i=0; i<n; i++){
    arr[i]=temp[i];
  }
}

int main() {
  int n;
  cout<<"enter the number of elements"<<endl;
  cin>>n;
  vector<int> arr(n);
  cout<<"enter "<<n<<" elements:"<<endl;
  for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
  reversearray(arr);
  cout << "Reversed array: ";
  for(int val:arr){
    cout<<val<<" ";
  }
    cout << endl;

    return 0;
}
