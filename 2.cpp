#include <iostream>
using namespace std;

int main(){
int i,n,j,s;    
int a[n];
cout<<"Enter the size of array:"<<endl;
cin>>n;
cout<<"\nEnter the values:\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
s=a[j];
a[j]=a[j+1];
a[j+1]=s;
}
}
}
cout<<"Sorted array:\n";
for(i=0;i<n;i++)
{
cout<<a[i] << "_";
}
return 0;
}
    


