#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
        swap(arr[low], arr[j]);
        return j;
    }
}

void QS(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        QS(arr, low, pIndex);
        QS(arr, pIndex + 1, high);
    }
}

vector<int> QuickSort(vector<int> &arr)
{
    QS(arr, 0, arr.size() - 1);
    return arr;
}

int main()
{
    int n;
    cout << "Enter the Size of your Array : ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    QuickSort(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}