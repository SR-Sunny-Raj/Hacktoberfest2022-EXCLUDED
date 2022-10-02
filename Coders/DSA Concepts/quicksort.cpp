#include <bits/stdc++.h>
using namespace std;
 
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 int partition (int arr[], int low, int high)
{
    int pivot = arr[low]; // pivot
    
    int i = (low ); 
   int j=high;
   while(i<j)
   {
       do
       {
           i++;
       }while(arr[i]<=pivot);

       do{
           j--;
       }while(arr[j]>pivot);

       if(i<j)
       swap(&arr[i],&arr[j]);
   }
    swap(&arr[low], &arr[j]);
    return j;
}
 
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
    }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
// Driver Code
int main()
{
    cout<<"Enter number of elements:";
    int n;
    cin>>n;
    int arr[n+1];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++) cin>>arr[i];
    arr[n]=100000;
   
    quickSort(arr, 0, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}