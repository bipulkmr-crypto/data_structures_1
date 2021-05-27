#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int shellSort(int arr[], int n)
{
    for (int gap = n / 2; gap > 0; gap--)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
    return 0;
}
int main()
{
    int n;

    cout << "ENTER The size of array" << endl;
    cin >> n;
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    shellSort(arr, n);
    cout << "After sorting" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}