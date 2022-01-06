#include<iostream>
using namespace std;

int sum(int *a , int size) {
  
  int ans=0;
  for(int i=0;i<size;i++)
  {
    ans += a[i];
  }
  return ans;
}

int main(){
  
  int arr[5] = {12,15,43,56,70};
  
  cout<<sum(arr,5)<<endl;
  
  return 0;
}
