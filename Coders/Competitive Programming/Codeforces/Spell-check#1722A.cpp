#include <bits/stdc++.h>
using namespace std;

string solve(int n, string s)
{
    multiset<char> str;
    str.insert('T');
    str.insert('i');
    str.insert('m');
    str.insert('u');
    str.insert('r');

    multiset<char> temp;
    for (int i = 0; i < n; i++)
    {
        temp.insert(s[i]);
    }

    return str == temp ? "YES\n" : "NO\n";
}

int main()
{
    int T;
    cin >> T;

    int n;
    string s;
    while (T--)
    {
        cin >> n;
        cin >> s;

        cout << solve(n, s);
    }
}