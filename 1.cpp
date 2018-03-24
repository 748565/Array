#include <iostream>
using namespace std;

int main() {
int n, min;
cout << "define any size of array";
cin >> n;

int A[n];
//cout << "A[ << "n" << ]has been created";

int i;
for(i=0;i<n;i++) {
cin >> A[i];
}
cout << "find the smallest element in array";
min= A[i];
for(i=0;i<n;i++){
  if (A[i]<min)
      min = A[i];
  else
      min =! A[i];
  }          
  {
cout << "smallest element =" << min;
  }
return 0;
}
