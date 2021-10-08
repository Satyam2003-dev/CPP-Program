#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = (start - 1);
    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[end]);
    return (i + 1);
}
void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pi = partition(arr, start, end);
        quickSort(arr, start, pi - 1);
        quickSort(arr, pi + 1, end);
    }
}
// main code
int main()
{
    int data[] = {15, 51, 64, 46, 88, 12, 65, 9, 14, 54, 54,68,15,1,5,2,3,78,24,52,25,65,95,12,58,45,36,45,45};
    int n = sizeof(data) / sizeof(data[0]);
    cout << "Unsorted Array: \n";
    printArray(data, n);
    quickSort(data, 0, n - 1);
    cout << "Sorted array in ascending order: \n";
    printArray(data, n);
}