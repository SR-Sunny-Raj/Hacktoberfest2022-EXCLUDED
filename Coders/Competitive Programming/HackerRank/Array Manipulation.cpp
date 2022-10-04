//Ques URL: https://www.hackerrank.com/challenges/crush/problem
#include <cstdio>
#include <iostream>
using namespace std;
long long mp[10000010];
int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  while (m--) {
    int x, y;
    long long num;
    scanf("%d%d%lld", &x, &y, &num);
    mp[x] += num;
    mp[y + 1] -= num;
  }
  long long cur = 0, ans = -9999999;
  for (int i = 1; i <= n; i++) {
    cur += mp[i];
    ans = max(ans, cur);
  }
  cout << ans << endl;
  return 0;
}
