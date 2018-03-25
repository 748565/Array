 

#include <iostream>
using namespace std;

int main ()
{
  int n ;
  cout<<"Enter the Size of the Array\n";
  cin>>n;
  int array[n];
  cout<<"Enter the elements in the array ";
  for(int i = 0;i<n;i++)
    {
      cin>>array[i];
    }

    int smallest = array[0] ;
    for ( int i=0;  i < n;  i++ )
        if ( array[i] < smallest )
             smallest = array[i] ;

    cout << "The smallest number in the array is " <<smallest<< '\n' ;

    return 0;
}
