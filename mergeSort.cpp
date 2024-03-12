#include <iostream>
#include<chrono>
using namespace std;

void merge(int arr[], int l, int r, int m)
{
    int k = 0, i = l, j = m + 1;
    int B[r - l + 1] = {};

    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            B[k] = arr[i];
            k++;
            i++;
        }

        else
        {
            B[k] = arr[j];
            k++;
            j++;
        }
    }

    while (j <= r)
    {
        B[k] = arr[j];
        k++;
        j++;
    }

    while (i <= m)
    {
        B[k] = arr[i];
        k++;
        i++;
    }

    for (int i = 0; i < k; i++)
    {
        arr[l + i] = B[i];
    }
}

void mergesort(int x[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergesort(x, l, mid);
        mergesort(x, mid + 1, r);
        merge(x, l, r, mid);
    }
}

int main()
{
    auto start = chrono::steady_clock::now();
    int len;

    cout << "Enter the number of elements: ";
    cin >> len;
    int arr[len];

    cout << "Enter the elements: ";
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    // int len = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, len - 1);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << "\n"
         << "Time taken: " << chrono::duration<float, micro>(diff).count() << " ms" << endl;
    return 0;
}