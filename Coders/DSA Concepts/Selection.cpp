#include <iostream>
using namespace std;
void swap(int *c, int *d)
{
    int temp = *c;
    *c = *d;
    *d = temp;
}
void Selection_sort(int a[], int n)
{
    int i, j, min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        swap(&a[min], &a[i]);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Selection_sort(a, n);

    cout << "After sorting" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}