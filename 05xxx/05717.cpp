#include <bits/stdc++.h>
using namespace std;

bool solve(void) {
  int m, f;
  cin >> m >> f;
  if (m == 0 && f == 0) return false;

  cout << m + f << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}