#include <iostream>
#include <vector>
using namespace std;

struct Problem {
  long long a, b, c, p;
};

bool cmp(const Problem &a, const Problem &b) {
  return a.p > b.p;
}

bool solve(void) {
  int n; cin >> n;
  vector<Problem> v(n);
  for (int i = 0; i < n; ++i) cin >> v[i].a >> v[i].b >> v[i].c >> v[i].p;

  long long a = 0, b = 0, c = 0;
  for (int i = 0; i < n; ++i) {
    a += max(0LL, v[i].a - a);
    b += max(0LL, v[i].b - b);
    c += max(0LL, v[i].c - c);
    if (a + b + c + i >= v[i].p) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}
