// SORTING & SEARCHING.
// 7 // Sorting the given string using character search.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout << "\nEnter a string :  ";
    getline(cin, str);

    sort(str.begin(), str.end());

    cout << endl << str << "\n\n";
}