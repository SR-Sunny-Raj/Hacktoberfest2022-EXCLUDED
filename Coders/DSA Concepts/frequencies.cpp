#include <bits/stdc++.h>
using namespace std;
// Function to find the frequency of an element
int CountFreq(int arr[], int n)
{
  unordered_map<int, int> h;
  for (int i = 0; i < n; i++)
  {
    h[arr[i]]++;
  }
  for (auto e : h)
  {
    cout << e.first << " " << e.second << endl;
  }
}

int main()
{
  int n;
  cin >> n; // size of an array
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  CountFreq(arr, n);
  return 0;
}