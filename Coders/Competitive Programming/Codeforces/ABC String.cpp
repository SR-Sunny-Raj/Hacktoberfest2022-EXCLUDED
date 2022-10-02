#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define ff first
#define ss second
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char ch = s[0], ce = s[s.length() - 1];

            if (ch == ce)
        {
            cout << "NO\n";
            continue;
        }
        if (count(s.begin(), s.end(), ch) == s.length() / 2 || count(s.begin(), s.end(), ce) == s.length() / 2)
        {
            int c = 0, t = 1;
            if (count(s.begin(), s.end(), ch) > count(s.begin(), s.end(), ce))
            {
                for (int i = 0; i < s.length(); i++)
                {
                    if (s[i] == ch)
                        c++;
                    else
                        c--;
                    if (c < 0)
                    {
                        t = 0;
                        break;
                    }
                }
                if (t == 1&&c==0)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            else
            {
                for (int i = 0; i < s.length(); i++)
                {
                    if (s[i] == ce)
                        c--;
                    else
                        c++;
                    if (c < 0)
                    {
                        t = 0;
                        break;
                    }
                }

                if (t == 1&&c==0)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
        else
            cout << "NO\n";
    }
    return 0;
}