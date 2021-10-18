//Time Complexity O(n)

#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
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
    cout << LinearSearch(arr, n, key) << "\n";
    return 0;
}