#include <iostream> 
#include <algorithm> 

using namespace std; 

void show(int a[],int n) 
{ 
	for(int i = 0; i < n; i++ ) 
		cout << a[i] << " "; 
} 

int main() 
{ 
	int a[100],n=0;
	cout<<"Enter the no. of element you want to enter: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	 } 
	cout << "\n The array before sorting is : "; 
	show(a,n); 
	
	sort(a, a+n);// sort(start_address, end_address) 

	cout << "\n\n The array after acending sorting is : "; 
	show(a,n); 
	
	sort(a, a+n, greater<int>());

	cout << "\n\n The array after sorting descending is : "; 
	show(a,n); 

	return 0; 

} 
