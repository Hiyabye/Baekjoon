#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

inline int strike(int x, int y) {
  int s = 0;
  if (x / 100 == y / 100) s++;
  if (x / 10 % 10 == y / 10 % 10) s++;
  if (x % 10 == y % 10) s++;
  return s;
}

inline int ball(int x, int y) {
  int b = 0;
  if (x / 100 == y / 10 % 10 || x / 100 == y % 10) b++;
  if (x / 10 % 10 == y / 100 || x / 10 % 10 == y % 10) b++;
  if (x % 10 == y / 100 || x % 10 == y / 10 % 10) b++;
  return b;
}

inline bool check(int n, const vector<tuple<int, int, int>> &v, int x) {
  for (int i=0; i<n; i++) {
    if (strike(get<0>(v[i]), x) != get<1>(v[i])) return false;
    if (ball(get<0>(v[i]), x) != get<2>(v[i])) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<tuple<int, int, int>> v(n);
  for (int i=0; i<n; i++) {
    int a, b, c; cin >> a >> b >> c;
    v[i] = {a, b, c};
  }

  int ans = 0;
  for (int i=123; i<=987; i++) {
    int a = i / 100, b = i / 10 % 10, c = i % 10;
    if (a == b || b == c || c == a || a == 0 || b == 0 || c == 0) continue;
    if (check(n, v, i)) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}