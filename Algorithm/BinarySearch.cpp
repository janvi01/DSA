//Time Complexity O(log n)
//only applicable in sorted list

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main()
{
    int n, key;
    cin >> n >> key;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << BinarySearch(arr, n, key) << "\n";
    return 0;
}