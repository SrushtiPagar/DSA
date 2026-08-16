#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++)
	{
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = i + 1; j < size; j++)
		{
            if (arr[i] > arr[j]) 
			{
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
	{
        sum += arr[i];
        i++;
    }
	cout<<"Sum is:"<<sum;
    return 0;
}






























