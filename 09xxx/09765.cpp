#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  long long c1, c2, c3, c4, c5, c6;
  cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6;

  long long x1 = 3;
  if (c1 % 2 == 0) x1--;
  else while (c1 % x1 != 0) x1 += 2;
  long long x2 = c1 / x1;
  if (c5 % x1 == 0) swap(x1, x2);
  long long x3 = c5 / x2;

  long long x6 = 3;
  if (c3 % 2 == 0) x6--;
  else while (c3 % x6 != 0) x6 += 2;
  long long x7 = c3 / x6;
  if (c6 % x7 == 0) swap(x6, x7);
  long long x5 = c6 / x6;

  cout << x1 << " " << x2 << " " << x3 << " " << x5 << " " << x6 << " " << x7;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}