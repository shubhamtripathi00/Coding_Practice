#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,key;
	cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
    	cout << "Enter the element : ";
    	cin >> arr[i];
    }

    cout << " The array is : ";
    for (int i = 0; i < n; i++)
    {
    	cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Enter the element you need to find : ";
    cin >> key;

 for(int i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			cout<<"The element is present at index : "<<i;
			return 0;
		}
	}	
	cout<<"The element is not present.";   

 
	return 0;
}
