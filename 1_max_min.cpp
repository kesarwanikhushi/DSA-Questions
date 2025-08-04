#include<iostream>
using namespace std;

int main(){
  int min, max;
  int arr[]={10,3,5,2,8,4,9,1};

  int n = sizeof(arr)/sizeof(arr[0]);

  min=arr[0];  max=arr[0];

  for (int i=1; i<=n; i++){

    if(arr[i]<min){
      min=arr[i];
    }
    
    if(arr[i]>max){
      max=arr[i];
    }
  }
  cout<<"Minimum element: "<<min<<endl;
  cout<<"Maximum element: "<<max;
  return 0;
}