#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int size, int i)
{
    int largest = i;
    int l = (2 * i) + 1;
    int r = (2 * i) + 2;
    while (l < size && arr[l] > arr[largest])
    {
        largest = l;
    }
    while (r < size && arr[r] > arr[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, size, largest);
    }
}

void heapsort(int arr[], int size)
{
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(arr, size, i);
    }
    for (int i = size - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr1[] = {5, 6, 4, 3, 7};
    int arr[] = {5, 6, 4, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    heapsort(arr1, size);
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}