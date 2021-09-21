#include <iostream>
#include <cmath>
using namespace std;

//Function to reverse an array
 void reverse(int arr[], int n)
{
	int low = 0, high = n - 1;
	while(low < high)
	{
		//Used temp variable to store the value temporary
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;

		low++;
		high--;
	}
}

int main()
{
       int arr[] = {10, 5, 7, 30}, n = 4;
       cout<<"Before Reverse"<<endl;
	// Print array before reversing
       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
       cout<<endl;
	// Fuction call
       reverse(arr, n);
       cout<<"After Reverse"<<endl;
	// Print array after reversing
       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
}
