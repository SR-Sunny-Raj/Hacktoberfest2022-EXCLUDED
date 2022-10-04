
#include<bits/stdc++.h>
using namespace std;


int countOccurrences(int arr[], int n, int x)
{
	int res = 0;
	for (int i=0; i<n; i++)
		if (x == arr[i])
		res++;
	return res;
}


int main()
{
	int arr[] = {1, 2, 2, 2, 2, 3, 4, 7 ,8 ,8 };
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 2;
	cout << countOccurrences(arr, n, x);
	return 0;
}
