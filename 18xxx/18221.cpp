#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  int a, b, c, d;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
    cin >> v[i][j];
    if (v[i][j] == 2) { a = i; b = j; }
    if (v[i][j] == 5) { c = i; d = j; }
  }
  if (a > c) swap(a, c);
  if (b > d) swap(b, d);
  if (hypot(c-a, d-b) < 5) return false;

  int cnt = 0;
  if (a != c && b != d) {
    for (int i=a; i<=c; i++) for (int j=b; j<=d; j++) cnt += v[i][j] == 1;
  } else if (a == c) {
    for (int i=b; i<=d; i++) cnt += v[a][i] == 1;
  } else {
    for (int i=a; i<=c; i++) cnt += v[i][b] == 1;
  }
  return cnt >= 3;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}