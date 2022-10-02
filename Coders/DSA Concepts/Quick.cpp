#include <iostream>
using namespace std;
void swap(int *c, int *d)
{
    int temp = *c;
    *c = *d;
    *d = temp;
}
int Partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l + 1;
    int j = h;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
            swap(&a[i], &a[j]);
    } 
    while (i < j);
    
    swap(&a[l], &a[j]);
    return j;
}
void quicksort(int a[], int l, int h)
{
    if (l < h)
    {
        int j = Partition(a, l, h);
        quicksort(a, l, j-1);
        quicksort(a, j + 1, h);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}