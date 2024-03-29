// Quick Sort algorithm is based on Divide and Conqure
#include<iostream>
using namespace std;

int partition(int arr[], int first, int last)
{
    int pivot = arr[last];
    int i = first-1; // for inserting elements < pivot
    int j = first; //for finding elements < pivot

    for(; j<last; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    /*
    Now i is pointing to the last element < pivot
    correct position for pivot will be -i+1
    */
    swap(arr[i+1], arr[last]);
    return i+1;
}

void QuickSort(int arr[], int first, int last)
{
    // Base Case
    if(first >= last)
    {
        return;
    }
    // Recursive Case
    int pi = partition(arr, first, last);
    QuickSort(arr, first, pi-1),
    QuickSort(arr, pi+1, last);
}

int main()
{
    int arr[] = {20, 12, 35, 16, 18, 30};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Unsorted Array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    QuickSort(arr, 0, n-1);

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
