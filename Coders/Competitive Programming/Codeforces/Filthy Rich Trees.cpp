// Euler tour with segment tree
// Filthy Rich Trees

// https://codeforces.com/gym/102694/problem/E

// Efficiently finding subtree product values

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i, a, b) for (int i = (a); i < (b); i++)
#define pb push_back
vector<int> start_pos(300009);
vector<int> end_pos(300009);
vector<int> v[300009];
int values[300009];
int ar[300009];
double seg[1300000];
int x = 1;
void eulertour(int s, int p)
{
  start_pos[s] = x;
  ar[x] = values[s];
  for (auto i : v[s])
  {
    if (i != p)
    {
      x++;
      eulertour(i, s);
    }
  }
  end_pos[s] = x;
}
void build(int s, int e, int ind)
{
  if (s == e)
  {
    seg[ind] = log2(double(ar[s]));
    return;
  }
  int mid = (s + e) / 2;
  build(s, mid, 2 * ind);
  build(mid + 1, e, 2 * ind + 1);
  seg[ind] = seg[2 * ind] + seg[2 * ind + 1];
}
double query(int s, int e, int ind, int l, int r)
{
  if (e < l || s > r)
    return 0.00;
  if (s >= l && e <= r)
    return seg[ind];
  int mid = (s + e) / 2;
  double q1 = query(s, mid, 2 * ind, l, r);
  double q2 = query(mid + 1, e, 2 * ind + 1, l, r);
  return q1 + q2;
}
void update(int s, int e, int ind, int node)
{
  if (s == e)
  {
    seg[ind] = log2(double(ar[node]));
    return;
  }
  int mid = (s + e) / 2;
  if (node <= mid)
    update(s, mid, 2 * ind, node);
  else
    update(mid + 1, e, 2 * ind + 1, node);
  seg[ind] = seg[2 * ind] + seg[2 * ind + 1];
}
void solve()
{
  int i, j, n, t, q, a, b, m, k, ct = 0, sum = 0, flag = 0;
  cin >> n;
  m = n - 1;

  loop(i, 1, n + 1)
  {
    values[i] = 1;
  }

  while (m--)
  {
    cin >> i >> j;
    v[i].pb(j);
    v[j].pb(i);
  }
  cin >> q;
  eulertour(1, 0);
  build(1, x, 1);
  while (q--)
  {
    cin >> j;
    if (j == 1)
    {
      cin >> a >> b;
      // a is node here, index in seg tree is start_pos[a]
      ar[start_pos[a]] = b;
      update(1, x, 1, start_pos[a]);
    }
    else
    {
      cin >> a >> b;
      double j1 = query(1, x, 1, start_pos[a], end_pos[a]);
      double k1 = query(1, x, 1, start_pos[b], end_pos[b]);
      double c = log2(double(1000000000.0));
      j1 = j1 - k1;
      if (j1 >= c)
        cout << (1000000000);
      else
        cout << fixed << setprecision(9) << pow(2, j1);
      cout << "\n";
    }
  }
}
signed main()
{
  solve();
  return 0;
}