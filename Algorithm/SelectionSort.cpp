//time complexity O(n2)
//Find the minimum element in unsorted array and swap it orderly
//Ascending order
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] <= arr[mini])
                mini = j;
        //swap
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}